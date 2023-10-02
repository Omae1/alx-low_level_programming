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
	int i = 0, length1 = 0, length2 = 0, totalLength = 0;
	char *str;

	if (s1 == NULL || s2 == NULL)
		return ('\0');

	while (s2 != NULL && s2[length2] != '\0')
		length2++;
	while (s1 != NULL && s1[length1] != '\0')
		length1++;
	totalLength = length1 + length2;
	str = malloc((totalLength + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	while (s1 != NULL  && *s1 != '\0')
		str[i++] = *s1++;
	while (s2 != NULL && *s2 != '\0')
		str[i++] = *s2++;
	str[i] = '\0';
return (str);
}
