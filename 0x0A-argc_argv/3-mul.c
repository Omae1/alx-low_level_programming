#include <stdio.h>
#include<stdlib.h>
/**
* main - prints product of two numbers passed as arguments
* @argc: the no. of arguments pased
* @argv: array that contains the program command line arguments.
* Return: 0 - success.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("error: argv cannot be less than two or more than two\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
