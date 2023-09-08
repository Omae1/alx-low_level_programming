#include <stdio.h>

/**
 * main - putchar prints a combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int comb[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
	putchar('0' + comb[i]);

		if (i < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
