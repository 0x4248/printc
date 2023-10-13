# PrintC

A new C logging and printing library. Inspired by the linux kernel printk system

## Usage

```c
#include "src/printc.h"
/* Import printc and its functions */

int main()
{
    config(true, true, true);
    /* Configure printc */

    printc("Hello, world!\n"); /* This is a standard print similar to printf and printk in the linux kernel */
    /* Pr prints have colouring and time stamps if enabled */
    pr_crit("Hello, world!\n"); /* Critical print */
    pr_err("Hello, world!\n"); /* Error print */
    pr_warn("Hello, world!\n"); /* Warning print */
    pr_info("Hello, world!\n"); /* Info print */
    pr_debug("Hello, world!\n"); /* Debug print */
    pr_trace("Hello, world!\n"); /* Trace print */
    return 0;
}
```

## Configuration

```c
void config(bool timestamp, bool level, bool colours)
```

### Timestamp

Shows time stamps in the prints.

### Level

Shows the level of the print.

### Colours

Shows colours in the prints at the level. This can help you see the level of the print.

## Levels

```
CRITICAL 0
ERROR    1
WARNING  2
INFO     3
DEBUG    4
TRACE    5
```

## Extended formats

You can also use the extended c formats.

```c
int x = 5;
printc("This is a number: %d\n", x);
```

Here are some of the standard C extended formats:

-   `%u` - unsigned int
-   `%d` - int
-   `%c` - char
-   `%s` - string
-   `%f` - float
-   `%lf` - double
-   `%p` - pointer
-   `%lu` - unsigned long
-   `%lld` - long long
-   `%llu` - unsigned long long
-   `%hhd` - signed char
-   `%hhu` - unsigned char
-   `%hd` - short
-   `%hu` - unsigned short
-   `%ld` - long
-   `%lu` - unsigned long
-   `%lld` - long long
-   `%llu` - unsigned long long

## Licence

This project is under the GNU General Public License v3.0 - see the [LICENCE](LICENCE) file for details
