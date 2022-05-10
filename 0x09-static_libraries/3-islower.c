#include "main.h"
/**
 * _islower - checks whether a character is lowercase
 * @c: character to test
 * Return: 0 or 1
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
