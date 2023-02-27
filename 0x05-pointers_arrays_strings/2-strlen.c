#include "main.h"

/**
 * _strlen - This function returns the length of a string.
 * @s: parameter function
 * Return: length of string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	len++;
	return (len);
}
