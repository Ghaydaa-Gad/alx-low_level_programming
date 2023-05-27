#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strlen - Calculate the length of a string
* @s: The input string
*
* Return: The length of the string
*/
int _strlen(const char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
/**
* main - Check the code
*
* Return: Always EXIT_SUCCESS
*/
int main(void)
{
printf("%d\n", _strlen("My Dyn Lib"));
return (EXIT_SUCCESS);
}
