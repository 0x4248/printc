/* Print C
 * A new C logging and printing library
 * Github: https://www.github.com/lewisevans2007/printc
 * Licence: GNU General Public Licence v3.0
 * By: Lewis Evans
*/

#include "src/printc.h"

int main()
{
    config(true, true, true);
    printc("Hello, world!\n");
    int x = 5;
    printc("Hello, world! %d\n", x);
    pr_crit("Hello, world!\n");
    pr_err("Hello, world!\n");
    pr_warn("Hello, world!\n");
    pr_info("Hello, world!\n");
    pr_debug("Hello, world!\n");
    pr_trace("Hello, world!\n");
    return 0;
}
