#include "main.h"

/**
*swap_int - swaps value of a and b
*
*@a: the values is a pointer
*
*@b: the values is a pointer
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;

return;
}
