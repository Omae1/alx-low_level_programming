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

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte (s)\n", sizeof(i));
	printf("Size of a long int: %zu byte (s)\n", sizeof(l));
	printf("Size of a long long int: %zu byte (s)\n", sizeof(ll));
	printf("Size of a float: %zu byte (s)\n", sizeof(pi));
	return (0);
}
