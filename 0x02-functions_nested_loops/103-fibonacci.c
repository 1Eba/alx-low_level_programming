#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
long int max = 4000000;
long int num1 = 0;
long int num2 = 1;
long int total = 0;
long int sum = 0;
while (max > num1)
{
total = num1 + num2;
if ((total % 2) == 0)
{
sum += total;
}
num1 = num2;
num2 = total;
}
printf("%ld\n", sum);
return (0);
}
