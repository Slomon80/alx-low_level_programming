#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 succesful
 *
 */
int main(void)
{
	int i;
	int x;

	for (i = '0'; i <= '9'; i++)

		putchar(i);

	for (x = 'a'; x <= 'f'; x++)

		putchar(x);

	putchar('\n');
	return (0);
}
