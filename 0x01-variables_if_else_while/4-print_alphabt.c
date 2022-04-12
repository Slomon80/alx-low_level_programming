#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always successful
 */

/* betty style doc for function main goes there */
int main(void)
{
	int alf;

	for (alf = 'a'; alf <= 'z'; alf++)
		if (alf == 'e' && alf == 'q')
			continue;
		putchar(alf);
		putchar('\n');
	return (0);
}
