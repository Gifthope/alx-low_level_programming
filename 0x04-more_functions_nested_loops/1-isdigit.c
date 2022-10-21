#include "main.h"

/**
 * _isdigit - check if char is a digit
 * @c: int to check
 * Return: 1 if char is a digit, else 0
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;
	return (y);
}
