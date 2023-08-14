/* PrintC
 * A new C logging and printing library
 * Github: https://www.github.com/lewisevans2007/printc
 * Licence: GNU General Public Licence v3.0
 * By: Lewis Evans
 */

#ifndef PRINTC_H
#define PRINTC_H

#include <stdbool.h>
#include <stdarg.h>
#include <time.h>

// Log level constants
#define LEVEL_CRITICAL  0
#define LEVEL_ERROR     1
#define LEVEL_WARNING   2
#define LEVEL_INFO      3
#define LEVEL_DEBUG     4
#define LEVEL_TRACE     5

// Function to configure printc
void config(bool timestamp, bool level, bool colours);

// Main printc function
void printc(const char *format, ...);

// Convenience functions for different log levels
void pr_crit(const char *format, ...);
void pr_err(const char *format, ...);
void pr_warn(const char *format, ...);
void pr_info(const char *format, ...);
void pr_debug(const char *format, ...);
void pr_trace(const char *format, ...);

#endif // PRINTC_H
