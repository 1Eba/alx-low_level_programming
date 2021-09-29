#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - element of an array
* @array: first parameter
* @size: second parameter
* @action: third parameter
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(*(array + i));
}
}
}
