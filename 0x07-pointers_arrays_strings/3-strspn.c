#include "main.h"

/**
* _strspn - counts how many leeter from start that we like
* @s: main string
* @accept: the character looking out for
*
* Return: an unsigned int of s
*/
unsigned int _strspn(char *s, char *accept)
{
int length = 0, i, j, accept_length = 0;


while (accept[accept_length] != '\0')
accept_length++;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0 ; j < accept_length; j++)
{
if (s[i] == accept[j])
{
length++;
break;
}
}
if (j == accept_length)
break;
}

return (length);
}
