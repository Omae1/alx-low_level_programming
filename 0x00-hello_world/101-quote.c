#include <unistd.h>
#include <stdio.h>

/**
*main- main function the execution starts here
*
*Return: returns 1 after program executes
*/
int main(void)
{
	const char *errorMessage = "and that piece of art is useful\" - Dora\
	Korpar, 2015-10-19\n";

	write(2, errorMessage, 59);
	return (1);
}
