#include "main.h"
/**
*_pow_recursion- returns result of x raised to y
*@x: the base number
*@y: the exponent number
*Return: returns the result of  x to power of y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 1)
return (x);
else if (y == 0)
return (1);
else
return  (_pow_recursion(x, y - 1) * x);
}

