#include <stdio.h>

/**
 * main - program that prints all possible different combinations of three digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if  (i < j && j < k)
				{
					putchar(j + '0');
					putchar(i + '0');
					putchar(k + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
