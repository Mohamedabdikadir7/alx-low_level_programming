#include "main.h"
/**
 * print_last_digit - check last digit
 * @n: integer
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = -1 * (n % 10);
		_putchar(i + '0');
		return (i);
	}
	else
	{
		i = n % 10;
		_putchar(i + '0');
		return (i);
	}
}
