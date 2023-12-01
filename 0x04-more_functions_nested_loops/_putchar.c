#include "main.h"
#include <unistd.h>

/**
 * putchar - prints character c
 *
 * Return : 1 when successful, -1 with error(s)
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
