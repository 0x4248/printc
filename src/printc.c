/* PrintC
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

#define LEVEL_CRITICAL 0
#define LEVEL_ERROR 1
#define LEVEL_WARNING 2
#define LEVEL_INFO 3
#define LEVEL_DEBUG 4
#define LEVEL_TRACE 5

bool show_timestamp = true;
bool show_level = true;
bool show_colours = true;
bool ran_config = false;
time_t init_time;

/* Config - configure the printc library
 * @show_timestamp: whether to show the timestamp
 * @show_level: whether to show the log level
 * @show_colours: whether to show colours
 */
void config(bool show_timestamp, bool show_level, bool show_colours)
{
    show_timestamp = show_timestamp;
    show_level = show_level;
    show_colours = show_colours;
    ran_config = true;
    time_t init_time = time(NULL);
}

/* PrintC - print a message
 * @format: the format string
 * @...: the arguments to the format string
 */
void printc(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

/* pr_crit - print a message at the critical log level
 * @format: the format string
 * @...: the arguments to the format string
 */
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
        printf("CRITICAL");
        if (show_colours)
        {
            printf("\033[0m");
        }
        printf("] ");
    }
    vprintf(format, args);
    va_end(args);
}

/* pr_err - print a message at the error log level
 * @format: the format string
 * @...: the arguments to the format string
 */
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
        printf("ERROR");
        if (show_colours)
        {
            printf("\033[0m");
        }
        printf("] ");
    }
    vprintf(format, args);
    va_end(args);
}

/* pr_warn - print a message at the warning log level
 * @format: the format string
 * @...: the arguments to the format string
 */
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

/* pr_info - print a message at the info log level
 * @format: the format string
 * @...: the arguments to the format string
 */
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

/* pr_debug - print a message at the debug log level
 * @format: the format string
 * @...: the arguments to the format string
 */
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

/* pr_trace - print a message at the trace log level
 * @format: the format string
 * @...: the arguments to the format string
 */
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
