#include "main.h"
#include <stdio.h>

/**
*print_diagsums - prints sums of diagonals
*
*@a: is a pointer to an interger
*@size: the size of array
*/
void print_diagsums(int *a, int size)
{
int i, sum = 0, sum1 = 0;

for (i = 0; i < size; i++)
{
sum = sum + a[i * size + i];
sum1 = sum1 + a[i * size + (size - i - 1)];
}
printf("%d, ", sum);
printf("%d\n", sum1);
}



