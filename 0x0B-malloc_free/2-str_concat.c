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
	int i, j, length1 = 0, length2 = 0, totalLength = 0;
	char *str;

	if (s1 == NULL || s2 == NULL)
		return ('\0');
	for (i = 0; s1[i] != '\0'; i++)
		length1++;
	for (i = 0; s2[i] != '\0'; i++)
		length2++;
	totalLength = length1 + length2;
	str = malloc((totalLength + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		str[i] = s1[i];
	for (j = 0; j < length2; j++)
		str[i++] = s2[j];
	str[i] = '\0';
return (str);
}
