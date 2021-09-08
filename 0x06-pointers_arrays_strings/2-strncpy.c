#include "holberton.h"

/**
 * *_strncpy - copied a string
 * @dest: first copied string
 * @src: second copied string
 *
 * Description: library copies string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for ( ; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
