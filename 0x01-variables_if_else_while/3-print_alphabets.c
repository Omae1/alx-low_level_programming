#include <stdio.h>

/**
 * main - putchar prints the alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
	putchar(alp[i]);
	}
	putchar('\n');
return (0);
}
