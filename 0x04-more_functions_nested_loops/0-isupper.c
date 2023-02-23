#include "main.h"
#include <stdio.h>

/**
 * main - function that checks for uppercase character
 * @c: function parameter
 * Returns 1 if c is uppercase or Returns 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
