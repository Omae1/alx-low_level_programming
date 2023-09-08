#include <stdio.h>

/**
 * main - putchar prints the Numberz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char numbers[] = "0123456789";

	for (i = 0; i < 10; i++)
	{
	putchar(numbers[i]);
	}
	putchar('\n');
return (0);
}
