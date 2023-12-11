#include "main.h"

/**
 * _isalpha - checks if the parameter passed is alphabetic
 *
 *@c: must be an int
 * Return:  1 if true otherwise 0
 */
int _isalpha(int c)
{
int ch = c;

if (ch >= 'a' && ch <= 'z')
{
return (1);
}
else if (ch >= 'A' && ch <= 'Z')
{
return (1);
}
else
{
return (0);
}
return (0);
}
