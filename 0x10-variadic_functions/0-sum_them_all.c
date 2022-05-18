#include "variadic_functions.h"
#include <stdarg.h>
/**
 *
 * sum_them_all - variadic function to add number
 * @n: const unsigned int type
 * Return: sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int list;
	va_list argz;
	
	if (n == 0)
		return 0;
	va_start(argz, n);
	sum = 0;
	for (list=0; list < n; list++ )
	{
	
		sum += va_arg(argz, unsigned int);
	}
	va_end(argz);
	return (sum);
}
