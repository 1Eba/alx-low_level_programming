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
finalString[i] = (2772 - sum) - 0;
finalString[i + 1] = '\0';
printf("%s", finalString);
return (0);
}
