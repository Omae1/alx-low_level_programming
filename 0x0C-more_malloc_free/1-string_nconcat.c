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
unsigned int i = 0, j = 0, k, lsout;
char *str;

if (s2 == NULL)
	return ("");

if (s1 == NULL)
	return ("");

while (s1[i] != '\0')
	i++;

while (j < n && s2[j] != '\0')
	j++;
if (n > j)
	n = j;

lsout = i + n;

str = malloc(lsout + 1);

if (str == NULL)
	return (NULL);

for (k = 0; k < lsout; k++)
	if(k < i)
		str[k] = s1[k];
	else
		str[k] = s2[k - i];
str[k] = '\0';
return (str);
}
