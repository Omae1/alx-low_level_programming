#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings
*
*@s1: first string
*@s2: second string
*@n: number of bytes to concatenate
*Return: pointer to allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, k;
char *str;

if (s2 == NULL)
	return ("");

if (s1 == NULL)
	return ("");

while (s1[i] != '\0')
	i++;

while (j < n && s2[j] != '\0')
	j++;
str = malloc((j + i + 1) * sizeof(char));

if (str == NULL)
	return (NULL);

for (k = 0; k < i; k++)
	str[k] = s1[k];
for (k = 0; k < j; k++)
	str[i + k] = s2[k];
str[i + j] = '\0';
return (str);
}
