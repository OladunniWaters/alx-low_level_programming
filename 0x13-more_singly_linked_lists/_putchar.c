#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: what is printing
 *
 * Return: on success 1.
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
