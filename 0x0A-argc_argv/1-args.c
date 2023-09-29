#include <stdio.h>

/**
*main - prints the number of arguments passed to it
*@argc: number of arguments
*@argv: no argument passed/unused
*Return: 0 always (success)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
