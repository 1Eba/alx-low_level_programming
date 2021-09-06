0;10;1c#include "holberon.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string
 * Return: int
 */

int _atoi(cahr *s)
{
int sign = 1, i;
unsigned int num = 0;
for (i = 0; s[i]; i++)
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
num = (num * 10) + (s[i] - '0');
else if (num > 0)
{
break;
}
}
return (num *sign);
}
