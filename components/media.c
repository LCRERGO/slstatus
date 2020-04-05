#include <stdio.h>
#include <stdlib.h>
#include <mpd/client.h>

#include "../util.h"

const char *
media_mpd_stat()
{
        struct mpd_connection *conn;
        struct mpd_status *status;
        struct mpd_song *song;
        char *title, *artist;
        char *ret;
        int elapsed, total;

        ret = (char *)malloc(128);
        if (!((conn = mpd_connection_new(NULL, 0, 0)) || 
                    mpd_connection_get_error(conn)))
                return NULL;

        mpd_command_list_begin(conn, true);
        mpd_send_status(conn);
        mpd_send_current_song(conn);
        mpd_command_list_end(conn);
        if ((status = mpd_recv_status(conn)) && 
                (mpd_status_get_state(status) == MPD_STATE_PLAY)) {
                mpd_response_next(conn);
                song = mpd_recv_song(conn);
                title = (char *)mpd_song_get_tag(song, MPD_TAG_TITLE, 0);
                artist = (char *)mpd_song_get_tag(song, MPD_TAG_ARTIST, 0);
                elapsed = mpd_status_get_elapsed_time(status);
                total = mpd_status_get_total_time(status);
                mpd_song_free(song);
                snprintf(ret, 128, "%.2d:%.2d/%.2d:%.2d %s - %s",
                        elapsed / 60, elapsed %60,
                        total / 60, total %60,
                        artist, title);
                free(title);
                free(artist);
        } else {
                return NULL;
        }
        mpd_response_finish(conn);
        mpd_connection_free(conn);

        return ret;
}
