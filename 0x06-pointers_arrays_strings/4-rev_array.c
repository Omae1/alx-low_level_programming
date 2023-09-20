#include "main.h"

/**
*reverse_array - reverses array of intergers
*
*@a: is variable
*
*@n: number of elemnts in the array
*
*
*/
void reverse_array(int *a, int n)
{
int i, j = n - 1, x;

for (i = 0; i < j; i++, j--)
{
x = a[i];
a[i] = a[j];
a[j] = x;
}
}

