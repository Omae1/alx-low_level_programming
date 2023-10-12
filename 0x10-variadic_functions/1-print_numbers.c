#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*print_numbers - prints arguments passed
*@separator: is a string
*@n: number of int arguments passed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list args;

	va_start(args, n);

	if (*separator == '\0')
		printf("\n");
	else
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				printf("%s", separator);
			}
			x = va_arg(args, unsigned int);
			printf("%d", x);
		}
	printf("\n");
	va_end(args);
}
