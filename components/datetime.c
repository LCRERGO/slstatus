/* See LICENSE file for copyright and license details. */
#include <stdio.h>
#include <time.h>
#include <string.h>

#include "../util.h"

const char *
datetime(const char *fmt)
{
	time_t t;

	t = time(NULL);
	if (!strftime(buf, sizeof(buf), fmt, localtime(&t))) {
		warn("strftime: Result string exceeds buffer size");
		return NULL;
	}

	return buf;
}

const char *
unicode_datetime()
{
        time_t t;
        t = time(NULL);

	if (!strftime(buf, sizeof(buf), "\uf455 %d/%m/%y ", localtime(&t))) {
		warn("strftime: Result string exceeds buffer size");
		return NULL;
	}

        if (!strftime(buf + strlen(buf), sizeof(buf), "\uf64f %H:%M", localtime(&t))){
		warn("strftime: Result string exceeds buffer size");
                return NULL;
        }

        return buf;
}
