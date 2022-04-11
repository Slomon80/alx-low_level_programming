#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 success
 */

/* betty style doc for function main goes there */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'B'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
