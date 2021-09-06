#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int i, sum, randomNumber;
char *originalString = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ0123456789";
char finalString[300];

srand(time(NULL));
i = 0;
for (sum = 0; sum <= (2772 - 122) ;)
{
randomNumber = rand() % 62;
finalString[i] = originalString[randomNumber];
sum = sum + finalString[i];
i++;
}
printf("%s", finalString);
return (0);
}
