#include <stdio.h>
#include <ctype.h>
int main(void)
{
int lower;
char upper;
lower = getchar();
putchar(lower);

upper = toupper(lower);
putchar(upper);

putchar("\n");
return(0);
}
