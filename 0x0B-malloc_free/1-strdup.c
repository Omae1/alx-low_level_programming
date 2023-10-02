#include "main.h"
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter.
*@str: string parameter
*
*Return: pointer to a newly allocated space in memory
*/
char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *str1;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	str1 = malloc((length + 1) * sizeof(char));
	if (str1 == NULL)
		return (NULL);
	for (; i <= length; i++)
		str1[i] = str[i];
	return (str1);
}
