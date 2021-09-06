#include "holberton.h"

/**
 * *_strcpy - copy string
 *
 * @dest: string to be copied to
 * @src: the string to be copied
 *
 * Description: copies string pointed to by src
 * Return: neturn pointer
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
