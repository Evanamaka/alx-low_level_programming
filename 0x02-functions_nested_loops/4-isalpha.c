#include "main.h"

/**
 * _isalpha - function that checks alphabet character
 * @c: parameters to be checked
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 * and return 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
