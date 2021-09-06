#include "holberton.h"

/**
 * puts2 - prints every other characters
 *
 * @str: string to print
 *
 * Return: void
 */

void puts2(char *str)
{
int leng = 0;
while (str[leng] != '\0')
{
if (leng % 2 == 0)
{
_putchar(str[leng]);
}
leng++;
}
_putchar('\n');
}
