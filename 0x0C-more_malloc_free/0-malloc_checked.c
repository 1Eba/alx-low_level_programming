#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *malloc_checked - allocates memory using malloc
* @b: size of the pointer
* Return: A pointer to the allocated memory or exit
*/
void *malloc_checked(unsigned int b)
{
void *pointer;

pointer = malloc(b);
if (!pointer)
{
exit(98);
}
return (pointer);
}
