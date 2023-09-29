#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
/**
* main - adds positive numbers
* @argc: the no. of arguments pased
* @argv: array that contains the program command line arguments.
* Return: 0 - success.
*/
int main(int argc, char *argv[])
{
	int cents, ycoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		ycoins += 1;
	}
	printf("%d\n", ycoins);
	return (0);
}
