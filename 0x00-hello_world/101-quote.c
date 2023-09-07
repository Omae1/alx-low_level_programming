#include <unistd.h>
#include <stdio.h>

int main(void)
{
	const char *errorMessage = "and that piece of art is useful\" - Dora\n"
	"Korpar, 2015-10-19\n";

	write(2, errorMessage, 54);
	return (1);
}
