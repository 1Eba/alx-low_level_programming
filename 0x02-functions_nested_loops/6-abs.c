#include <stdio.h>
#include "holberton.h"

/**
 * _abs - compute absolute value
 *
 * @n: value to compute
 *
 * Return: n, the absolute value of number
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
n = -n;
return (n);
}
}
