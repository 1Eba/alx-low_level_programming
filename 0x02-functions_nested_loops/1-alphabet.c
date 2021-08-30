#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - function to print alphabet in lower case
 * followed by a new line
 *
 * Return: Void
 */
void print_alphabet(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');

}
