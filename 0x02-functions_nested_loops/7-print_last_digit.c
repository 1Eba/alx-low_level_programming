#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - compute and print last digit
 *
 * @num: number to be computed
 *
 * Return: last digit of num
 */

int print_last_digit(int num)
{
char lastDgt;

num %= 10;
if (num < 0)
num = -num;
lastDgt = '0' + num;
_putchar(lastDgt);
return (num);
}
