#include "holberton.h"

/**
 * _strcat - return the length of a strings
 * @s: pointer of character
 * Return: Always 0.
 */
int _strlen(char *s)
{
int len;
len = 0;
while (*(s + len) != '\0')
len++;
return (len);
}

/**
 * *_strcat - concatenates two strings
 * @dest: string to dest
 * @stc: string origin
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, lendest, lensrc;


lendest = _strlen(dest);
lensrc = _strlen(src);
for (i = 0; i < lensrc; i++)
{
dest[lendest + i] = src[i];
}
return (dest);
}
