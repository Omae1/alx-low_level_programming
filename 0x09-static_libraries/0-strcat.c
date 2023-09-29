#include "main.h"

/**
*_strcat - concatenates two string and returns a pointer
*
*@dest: is a pointer
*
*@src: is a pointer
*
*Return: always dest (a pointer )
*/
char *_strcat(char *dest, char *src)
{
int destLength = 0, srcLength = 0, i;

while (dest[destLength] != '\0')
{
destLength++;
}
while (src[srcLength] != '\0')
{
srcLength++;
}
for (i = 0; i < srcLength; i++)
{
dest[destLength + i] = src[i];
}
dest[destLength + srcLength] = '\0';
return (dest);
}
