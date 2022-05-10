#include "main.h"
/**
 *  _abs - gives absolute value of an integer
 *  @num: tested integer.
 *  Return: integers only.
 */
int _abs(int num)
{
	if (num >=  0)
	{
		return (num);
	}
	else
	{
		return (num * (-1));
	}
	return (0);
}
