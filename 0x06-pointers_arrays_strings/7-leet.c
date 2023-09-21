#include "main.h"

/**
*leet - encodes a string into 1337
*
*
*
*@s:is a pointer array
*
*Return: s always
*/
char *leet(char *s)
{
char *str = s;

while (*s != '\0')
{
if (*s == 'a' || *s == 'A')
*s = '4';
else if (*s == 'e' || *s == 'E')
*s = '3';
else if (*s == 'o' || *s == 'O')
*s = '0';
else if (*s == 't' || *s == 'T')
*s = '7';
else if (*s == 'l' || *s == 'L')
*s = '1';

s++;
}
return (str);
}
