/*
 *     _   __  _                __ 
 *    / | / / (_)___  _________/ / 
 *   /  |/ / / / __ \/ ___/ __  /  
 *  / /|  / / / /_/ / /  / /_/ /   
 * /_/ |_/_/ /\____/_/   \__,_/    
 *      /___/                      
 *       
 * Author: Lucas Cruz dos Reis(L.C.R.) 
 * Github: https://github.com/LCRERGO 
*/
/* See LICENSE file for copyright and license details. */

/* battery */
const char *battery_perc(const char *);
const char *battery_state(const char *);
const char *battery_remaining(const char *);
const char *ubattery(const char *);

/* cpu */
const char *cpu_freq(void);
const char *cpu_perc(void);
const char *ucpu_perc(void);

/* datetime */
const char *datetime(const char *fmt);
const char *udatetime();

/* disk */
const char *disk_free(const char *path);
const char *disk_perc(const char *path);
const char *disk_total(const char *path);
const char *disk_used(const char *path);

/* entropy */
const char *entropy(void);

/* hostname */
const char *hostname(void);

/* ip */
const char *ipv4(const char *interface);
const char *ipv6(const char *interface);

/* kernel_release */
const char *kernel_release(void);

/* keyboard_indicators */
const char *keyboard_indicators(void);

/* keymap */
const char *keymap(void);

/* load_avg */
const char *load_avg(void);

/* media */
const char *media_mpd_stat(void);

/* netspeeds */
const char *netspeed_rx(const char *interface);
const char *netspeed_tx(const char *interface);

/* num_files */
const char *num_files(const char *path);

/* ram */
const char *ram_free(void);
const char *ram_perc(void);
const char *ram_total(void);
const char *ram_used(void);
const char *uram_perc(void);

/* run_command */
const char *run_command(const char *cmd);

/* swap */
const char *swap_free(void);
const char *swap_perc(void);
const char *swap_total(void);
const char *swap_used(void);

/* temperature */
const char *temp(const char *);

/* uptime */
const char *uptime(void);

/* user */
const char *gid(void);
const char *username(void);
const char *uid(void);

/* volume */
const char *vol_perc(const char *card);

/* wifi */
const char *wifi_perc(const char *interface);
const char *wifi_essid(const char *interface);
const char *uwifi_perc(const char *interface);
