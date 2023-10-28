#include <stdio.h>
/**
 * main - print alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
