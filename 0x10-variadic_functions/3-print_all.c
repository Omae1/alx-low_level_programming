#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

void print_character(va_list arg);
void print_integer(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
* print_character - Prints a char.
* @arg: A list of arguments pointing to
*       the character to be printed.
*/
void print_character(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
		printf("%c", letter);
}

/**
* print_integer - Prints an int.
* @arg: A list of arguments pointing to
*       the integer to be printed.
*/
void print_integer(va_list arg)
{
	int num;

	num = va_arg(arg, int);
		printf("%d", num);
}

/**
* print_float - Prints a float.
* @arg: A list of arguments pointing to
*       the float to be printed.
*/

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
		printf("%f", num);
}

/**
* print_string - Prints a string.
* @arg: A list of arguments pointing to
*       the string to be printed.
*/
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
* print_all - Prints anything, followed by a new line.
* @format: A string of characters representing the argument types.
* @...: A variable number of arguments to be printed.
*
* Description: Any argument not of type char, int, float,
*              or char * is ignored.
*              If a string argument is NULL, (nil) is printed instead.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_character},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
