#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in string
 * @s: pointer to the string to search for character
 * @c: character to serch for in string s
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
