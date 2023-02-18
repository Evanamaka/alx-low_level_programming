#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints single numbers of base 10 from 0 followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
