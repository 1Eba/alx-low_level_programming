#include "holberton.h"

/**
 * _strlen -calculate the lengh of strings
 *
 *@s: stores the input
 *
 * Return: length
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
