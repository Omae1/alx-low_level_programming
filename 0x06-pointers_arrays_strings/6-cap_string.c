#include "main.h"

/**
*cap_string - capitalizes all words in a string
*
*
*
*@str:is a pointer array
*
*Return: str always
*/
char *cap_string(char *str)
{
int current_char = 0;
int capital = 1;

while (str[current_char] != '\0')
{
if (str[current_char] == ' ' || str[current_char] == '\t'
|| str[current_char] == '\n' ||
str[current_char] == ',' || str[current_char] == ';' ||
str[current_char] == '.' || str[current_char] == '!' ||
str[current_char] == '?' || str[current_char] == '"' ||
str[current_char] == '(' || str[current_char] == ')' ||
str[current_char] == '{' || str[current_char] == '}')
{
capital = 1;
}
else
{
if (capital && str[current_char] >= 'a' && str[current_char] <= 'z')
{
str[current_char] = str[current_char] - ('a' - 'A');
capital = 0;
}
else
{
capital = 0;
}
}
current_char++;
}
return (str);
}

