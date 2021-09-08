#include "holberton.h"

/**
 * *leet - loops in code
 * @if: for coding
 *
 * Description: encodes asting in function
 * Return: Always 0.
 */
char *leet(char *c)
{
	int i, j;
	char a[] = "oO1LeEaAtT";
	char n[] = "0011334477";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)

		{
			if (c[i] == a[j])
			{
				c[i] = n[j];
			}
		}
	}
	return (c);
}
