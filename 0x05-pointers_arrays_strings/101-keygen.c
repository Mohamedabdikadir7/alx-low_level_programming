#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generrate random valid passwords
 * Return: 0
 */
int main(void)
{
	int i;
	int sum = 2772;

	srand(time(NULL));

	for (i = 0; sum > 122; i++)
	{
		int rand_num = rand() % 128;
		if (rand_num >= 32 && rand_num <= 126)
		{
			printf("%c", rand_num);
			sum -= rand_num;
		}
	}
	printf("%c", sum);

	return (0);
}
