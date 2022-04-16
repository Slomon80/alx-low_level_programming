#include "main.h"
/**
 * print_last_digit - print the last digit
 * @num: the character to be tested.
 */
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar((num % 10) + '0');
	return (num % 10);
}
