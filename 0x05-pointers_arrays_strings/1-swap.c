#include "holberton.h"

/**
 * swap_int swaps two integer
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{

  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
