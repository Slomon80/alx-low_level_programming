#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positve_negative - prints positive or negative
 */
/* more headers goes there */

/* betty style doc for function main goes there */
void positive_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
}
