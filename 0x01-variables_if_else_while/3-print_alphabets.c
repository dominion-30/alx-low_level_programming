/*
* Author: Abiola Ayobamidele
*/

#include <stdio.h>
#include <ctype.h>

/**
* main: lowercase and uppercase alphabets
*
* Return Always 0 (success)
**/

int main(void)
{
	char letter;
	for (letter ='a'; letter<='z'; letter++)
		putchar(letter);
		putchar(toupper(letter));

	putchar('\n');
	return(0);
}
