/* PrintC
 * A new C logging and printing library
 * Github: https://www.github.com/lewisevans2007/printc
 * Licence: GNU General Public Licence v3.0
 * By: Lewis Evans
 */

/* This code prints "Hello, world!" to the screen, 
   along with a number and a message at each log level. 
   This code is intended to be used as a demonstration of 
   how to use the printc.h header file. */

#include "src/printc.h"

int main()
{
    config(true, true, true); /* Setup the printc library */
    printc("Hello, world!\n"); /* Print a message */
    int x = 5; /* Declare a variable */
    printc("Hello, world! %d\n", x); /* Print a message with a variable */
    pr_crit("Hello, world!\n"); /* Print a message at the critical log level */
    pr_err("Hello, world!\n"); /* Print a message at the error log level */
    pr_warn("Hello, world!\n"); /* Print a message at the warning log level */
    pr_info("Hello, world!\n"); /* Print a message at the info log level */
    pr_debug("Hello, world!\n"); /* Print a message at the debug log level */
    pr_trace("Hello, world!\n"); /* Print a message at the trace log level */
    return 0;
}
