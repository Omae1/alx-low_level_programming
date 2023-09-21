#include "main.h"

/**
*string_toupper - changes lowercase characters to upper in a string
*
*
*
*@s:is a pointer array
*
*Return: s always
*/
char *string_toupper(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - ('a' - 'A');
}
i++;
}
return (s);
}
