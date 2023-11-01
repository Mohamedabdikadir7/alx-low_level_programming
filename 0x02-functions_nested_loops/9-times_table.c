#include "main.h"
/**
 * times_table - print the multiplication table
 *
 */
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k < 10 && j != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			if (k < 10)
				_putchar('0' + k);
			if (k > 9)
			{
				l = k / 10;
				m = k % 10;

				_putchar(44);
				_putchar(32);
				_putchar('0' + l);
				_putchar('0' + m);
			}
		}
		_putchar('\n');
	}
}
