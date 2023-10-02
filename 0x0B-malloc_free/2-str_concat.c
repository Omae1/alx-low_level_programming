#include "main.h"
#include <stdlib.h>
/**
*str_concat - returns a pointer to a newly allocated space in
*memory for concatenated string
*@s1: first string
*@s2: second string
*Return: pointer to a newly allocated space in memory
*/
char *str_concat(char *s1, char *s2)
{
	int i, concat_string = 0,  length = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	str = malloc(length * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[concat_string++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[concat_string++] = s2[i];
return (str);
}
