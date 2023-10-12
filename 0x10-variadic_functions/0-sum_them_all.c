#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums up all arguments
*@n: constant value of arguments
*Return: returns sum of parameters passed
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x;
	unsigned int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	else
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, unsigned int);
			sum += x;
		}
		va_end(args);
		return (sum);
}
