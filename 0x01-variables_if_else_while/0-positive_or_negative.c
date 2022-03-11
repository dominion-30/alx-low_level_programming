#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
/*program to determine the polarity of a number*/
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
    printf("%d is positive\n", n);
}

else if (n < 0)
{
    printf("%d is negative\n", n);
}

else
{
    printf("%d is zero\n", n);
}

/* your code goes there */
return (0);
}
