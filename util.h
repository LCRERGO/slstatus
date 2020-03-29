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
#include <stdint.h>

extern char buf[1024];

#define LEN(x) (sizeof (x) / sizeof *(x))

extern char *argv0;

void warn(const char *, ...);
void die(const char *, ...);

int esnprintf(char *str, size_t size, const char *fmt, ...);
const char *bprintf(const char *fmt, ...);
const char *fmt_human(uintmax_t num, int base);
int pscanf(const char *path, const char *fmt, ...);
char *setcolor(const char *original, const char *bg, const char *fg);
int csnprintf(char *str, size_t size, const char *fmt, 
        const char *bg, const char *fg, ...);
