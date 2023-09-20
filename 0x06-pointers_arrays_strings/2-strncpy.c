#include "main.h"

/**
*_strncpy - copies string from src to dest
*
*@dest: is a pointer
*
*@src: is a pointer
*
*@n: no. of characters from src
*
*Return: always dest (a pointer )
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && (*dest++ = *src++))
{
i++;
}
if (i < n)
dest[i] = '\0';
return (dest);
}
