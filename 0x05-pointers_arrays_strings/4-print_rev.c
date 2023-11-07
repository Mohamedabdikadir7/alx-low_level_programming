#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse to stdout.
 * @s: A pointer to the string to be printed in reverse.
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}

	_putchar('\n');
}
