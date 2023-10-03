#include "main.h"
#include <stdlib.h>

/**
*argstostr - Concatenates all argument of the program into a string
*		arguments are separated by a new line in the string
*@ac: the number of arguments passed to the program
*@av: an array of pointers to the arguments
*Return: if ac == 0|| av == NULL -NULL;otherwise pointer to the atring
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, index, size = ac;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];

		str[index++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
