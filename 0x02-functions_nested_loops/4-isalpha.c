#include "main.h"
/**
 * _isalpha: checks whether a character if from the English alphabet
 * @c: test character
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
