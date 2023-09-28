#include "main.h"
int is_prime(int n, int i);
/**
*is_prime_number - reruns 1 if number is prime number
*@n: is an interger
*Return: returns 1 if prime number otherwise 0
*/
int is_prime_number(int n)
{
return (is_prime(n, 2));
}

/**
*is_prime - check if number is prime
*@n: is number being checked
*@i: sqrt interger of n
*Return: returns 0 if not prime otherwise 1
*/

int is_prime(int n, int i)
{

if (n < 2)
return (0);
if (i * i  > n)
return (1);
if (n % i == 0)
return (0);
else
return (is_prime(n, i + 1));
}
