#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints upto 98
 *
 * @n: starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
{
printf("%d, ", n);
}
}
else if (n > 98)
{
for (n = n; n > 98; n--)
{
printf("%d, ", n);
}
}
if (n == 98)
{
printf("%d\n", n);
}
}
