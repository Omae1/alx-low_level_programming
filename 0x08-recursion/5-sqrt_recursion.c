#include "main.h"
int is_sqrt(int n, int i);
/**
*_sqrt_recursion - function finds the natural sqrt
*@n: is the number to find sqrt
*Return: returns sqrt
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (is_sqrt(n, 0));
}

/**
*is_sqrt - finds the natural squareroot of a number
*@n: is number being checked its sqrt
*@i: iterator
*Return: returns -1 if not natural sqrt, else sqrt
*/

int is_sqrt(int n, int i)
{
if (i * i  > n)
return (-1);
if (i * i == n)
return (i);
return (is_sqrt(n, i + 1));
}
