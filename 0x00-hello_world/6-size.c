#include <stdio.h>

/**
*main - takes in arguments to show their memory size
*
*Return: always returns 0 (Success)
*/
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float pi;

	printf("The size of a char: %zu byte(s)\n", sizeof(c));
	printf("The size of an int: %zu byte (s)\n", sizeof(i));
	printf("The size of a long int: %zu byte (s)\n", sizeof(l));
	printf("The size of a long long int: %zu byte (s)\n", sizeof(ll));
	printf("The size of a float: %zu byte (s)\n", sizeof(pi));
	return (0);
}
