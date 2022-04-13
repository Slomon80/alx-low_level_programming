#include <unistd.h>
/**
 * _putchar - write c to stand out
 * @c: The character to print
 *
 * Return: 0 successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
