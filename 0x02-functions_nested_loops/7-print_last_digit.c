#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @num: the character to be tested.
 * Return: return the las digit
 */
int print_last_digit(int num)
{
	int lastDig;

	if (num < 0)
	{
		lastDig = ((num % 10) * -1);
		_putchar(lastDig + '0');
		return (lastDig);
	}
	else
	{

		lastDig = (num % 10);
		_putchar(lastDig + '0');

		return (lastDig);
	}
}
