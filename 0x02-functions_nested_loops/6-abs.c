#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value
 *@a: parameter function
 * Return: Absolut nuber or 0.
 */
int _abs(int a)
{

	if (a < 0)
	{
	int abs_val;

	abs_val = a * -1;
	return (abs_val);
	}
	return (a);
}
