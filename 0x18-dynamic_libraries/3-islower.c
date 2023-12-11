#include "main.h"

/**
 * _islower - checks if the parameter passed is lower
 *
 *@c: must be an int
 * Return:  1 if true otherwise 0
 */
int _islower(int c)
{
int ch = c;

if (ch >= 'a' && ch <= 'z')
{
return (1);
}
else
{
return (0);
}
return (0);
}
