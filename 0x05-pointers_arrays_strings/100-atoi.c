#include "main.h"
/**
 * _atoi - conver string to integer
 * @s: string
 * Return: Integer value of string
 */
int _atoi(char *s)
{
	int sign = 1, i, num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + sign * (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
	}
	return (num);
}
