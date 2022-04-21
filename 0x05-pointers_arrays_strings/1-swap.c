#include "main.h"

/**
 * swap_int - swap the valuses of two integers a and b
 * @*a: A pointer to an int that will be updated
 * @*b: B pointer to an int that will be updated
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

