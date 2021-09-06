#include "holberton.h"

/**
 * rev_string - reverse string
 *
 * @s: input string
 *
 * Rerturn: Void
 */
void rev_string(char *s)
{
int leng1 = 0;
int leng2 = 0;
char tmp;
while (s[leng1] != '\0')
{
leng1++;
}
leng1 = leng1 - 1;
while (leng2 <= leng1)
{
tmp = s[leng2];
s[leng2] = s[leng1];
s[leng1] = tmp;
leng2++;
leng1--;
}
}
