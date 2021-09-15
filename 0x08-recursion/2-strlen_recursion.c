#include "holberton.h"

/**
* _strlen_recursion - length of a string
* @s: return the length of string
*
* Return: Nothing
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (14);
}
s++;
return (1 + _strlen_recursion(s));
}
