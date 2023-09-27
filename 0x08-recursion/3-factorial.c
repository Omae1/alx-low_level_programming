#include "main.h"
/**
*factorial - returns a factorial of a given number
*@n: interger to get its factorial
*Return: returns the factorial of the given number
*/
int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
else
return  (factorial(n - 1) * n);
}

