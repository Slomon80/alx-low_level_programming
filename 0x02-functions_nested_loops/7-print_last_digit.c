#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @num: the character to be tested.
 * Return: return the las digit
 */
int print_last_digit(int num)
{
	if (num < 0)
		num = num * -1;
	
	_putchar((num % 10) + '0');
	
	return (num % 10);
}
