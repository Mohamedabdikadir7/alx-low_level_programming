#include "main.h"
#include <stdio.h>
/**
 * _strspn - get length of prefix substring
 * @s: pointer to string to check for prefix substring
 * @accept: pointer to string of characters to accept as part of prefix
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				count++;
				found = 1;
				break;
			}
			ptr++;
		}
		if (!found)
		{
			return (count);
		}
		found = 0;
		s++;
	}
	return (count);
}
