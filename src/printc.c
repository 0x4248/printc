/* Print C
 * A new C logging and printing library
 * Github: https://www.github.com/lewisevans2007/printc
 * Licence: GNU General Public Licence v3.0
 * By: Lewis Evans
 */

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

#define LEVEL_CRITICAL  0
#define LEVEL_ERROR     1
#define LEVEL_WARNING   2
#define LEVEL_INFO      3
#define LEVEL_DEBUG     4
#define LEVEL_TRACE     5

bool show_timestamp = true;
bool show_level = true;
bool show_colours = true;
bool ran_config = false;
time_t init_time;

void config(bool timestamp, bool level, bool colours)
{
    show_timestamp = timestamp;
    show_level = level;
    show_colours = colours;
    ran_config = true;
    time_t init_time = time(NULL);
}

void printc(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

void pr_crit(const char *format, ...)
{
    if (!ran_config)
    {
        printc("============== CONFIG ERROR =============\n");
        printc("You must run config() before using printc\n");
        printc("=========================================\n");
        return;
    }
    va_list args;
    va_start(args, format);
    if (show_timestamp)
    {
        time_t current_time = time(NULL);
        printf("[%ld] ", current_time - init_time);
    }
    if (show_level)
    {
        printf("[");
        if (show_colours)
        {
            printf("\033[31m");
        }
        printf("CRIT");
        if (show_colours)
        {
            printf("\033[0m");
        }
        printf("] ");
    }
    vprintf(format, args);
    va_end(args);
}

void pr_err(const char *format, ...)
{
    if (!ran_config)
    {
        printc("============== CONFIG ERROR =============\n");
        printc("You must run config() before using printc\n");
        printc("=========================================\n");
        return;
    }
    va_list args;
    va_start(args, format);
    if (show_timestamp)
    {
        time_t current_time = time(NULL);
        printf("[%ld] ", current_time - init_time);
    }
    if (show_level)
    {
        printf("[");
        if (show_colours)
        {
            printf("\033[31m");
        }
        printf("ERR");
        if (show_colours)
        {
            printf("\033[0m");
        }
        printf("] ");
    }
    vprintf(format, args);
    va_end(args);
}

void pr_warn(const char *format, ...)
{
    if (!ran_config)
    {
        printc("============== CONFIG ERROR =============\n");
        printc("You must run config() before using printc\n");
        printc("=========================================\n");
        return;
    }
    va_list args;
    va_start(args, format);
    if (show_timestamp)
    {
        time_t current_time = time(NULL);
        printf("[%ld] ", current_time - init_time);
    }
    if (show_level)
    {
        printf("[");
        if (show_colours)
        {
            printf("\033[33m");
        }
        printf("WARN");
        if (show_colours)
        {
            printf("\033[0m");
        }
        printf("] ");
    }
    vprintf(format, args);
    va_end(args);
}

void pr_info(const char *format, ...)
{
    if (!ran_config)
    {
        printc("============== CONFIG ERROR =============\n");
        printc("You must run config() before using printc\n");
        printc("=========================================\n");
        return;
    }
    va_list args;
    va_start(args, format);
    if (show_timestamp)
    {
        time_t current_time = time(NULL);
        printf("[%ld] ", current_time - init_time);
    }
    if (show_level)
    {
        printf("[");
        if (show_colours)
        {
            printf("\033[32m");
        }
        printf("INFO");
        if (show_colours)
        {
            printf("\033[0m");
        }
        printf("] ");
    }
    vprintf(format, args);
    va_end(args);
}

void pr_debug(const char *format, ...)
{
    if (!ran_config)
    {
        printc("============== CONFIG ERROR =============\n");
        printc("You must run config() before using printc\n");
        printc("=========================================\n");
        return;
    }
    va_list args;
    va_start(args, format);
    if (show_timestamp)
    {
        time_t current_time = time(NULL);
        printf("[%ld] ", current_time - init_time);
    }
    if (show_level)
    {
        printf("[");
        if (show_colours)
        {
            printf("\033[34m");
        }
        printf("DEBUG");
        if (show_colours)
        {
            printf("\033[0m");
        }
        printf("] ");
    }
    vprintf(format, args);
    va_end(args);
}

void pr_trace(const char *format, ...)
{
    if (!ran_config)
    {
        printc("============== CONFIG ERROR =============\n");
        printc("You must run config() before using printc\n");
        printc("=========================================\n");
        return;
    }
    va_list args;
    va_start(args, format);
    if (show_timestamp)
    {
        time_t current_time = time(NULL);
        printf("[%ld] ", current_time - init_time);
    }
    if (show_level)
    {
        printf("[");
        if (show_colours)
        {
            printf("\033[35m");
        }
        printf("TRACE");
        if (show_colours)
        {
            printf("\033[0m");
        }
        printf("] ");
    }
    vprintf(format, args);
    va_end(args);
}