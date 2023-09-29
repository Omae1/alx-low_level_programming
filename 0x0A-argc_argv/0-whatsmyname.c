#include <stdio.h>
#include "main.h"
/**
*my_name - prints argv[0]
*@argv: string array
*/
void my_name(char *argv[])
{

printf("%s\n", argv[0]);

}


int main(int argc, char *argv[])
{
printf("%d\n", argc);
my_name(argv);
return (0);
}
