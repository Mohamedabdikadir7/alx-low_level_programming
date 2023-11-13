#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locate occurrence in string
 * @s: pointer to string to search for
 * @accept: pointer to string of bytes to search for
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
