#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n number of array
 *
 * @a: array to print
 * @n: number of array to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;
while (i <= n - 1)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
