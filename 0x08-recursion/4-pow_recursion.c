#include "holberton.h"

/**
* _pow_recursion - value of the power
* @x: raised to power
* @y: value  lower than
* Return: Nothing
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
