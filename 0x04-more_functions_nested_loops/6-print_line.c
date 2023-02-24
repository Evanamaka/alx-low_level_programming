#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a straight line on the terminal
 * @n: number of "_"
 */

void print_line(int n)
{
	int i = 0;

	while (i < n && n > i)
	{
		putchar(95);
		i++;
	}
	putchar(10);
}
