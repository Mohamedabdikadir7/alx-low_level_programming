#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate substring
 * @haystack: pointer to string to search for substring needle
 * @needle: pointer to substring to search for in haystack
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;

	for (p1 = haystack; *p1 != '\0'; p1++)
	{
		p2 = p1;
		p3 = needle;
		while (*p3 != '\0' && *p2 == *p3)
		{
			p2++;
			p3++;
		}
		if (*p3 == '\0')
		{
			return (p1);
		}
	}
	return (NULL);
}
