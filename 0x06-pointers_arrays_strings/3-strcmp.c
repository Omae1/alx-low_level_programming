#include "main.h"

/**
*_strcmp - compares two strings
*
*@s1: is a pointer
*
*@s2: is a pointer
*
*Return: 0 if s1==s2, -ve if s1<s2, +ve if s1>s2
*/
int _strcmp(char *s1, char *s2)
{
for (; *s1 == *s2; s1++, s2++)
{
if (*s1 == '\0')
{
return (0);
}
}
return (*s1 - *s2);
}

