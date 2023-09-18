#include "main.h"

/**
*_strlen - returns length of a string
*
*
*
*@s: the values is a pointer
*/
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
;
}

return length;
}
