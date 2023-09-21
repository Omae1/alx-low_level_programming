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
int i, j;
char x1[] = "aAeEoOtTlL";
char x2[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == x1[j])
{
s[i] = x2[j];
}
}
}
return (s);
}
