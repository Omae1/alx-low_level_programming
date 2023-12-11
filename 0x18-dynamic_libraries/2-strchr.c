#include "main.h"

/**
* _strchr - locates a character in a string
* @s: main string
* @c: the character to be located
*
* Return: null
*/
char *_strchr(char *s, char c)
{
int index;
for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return (0);
}
