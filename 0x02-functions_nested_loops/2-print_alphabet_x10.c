#include "main.h"

/**
* main - print 10x letters of the alphabet in lowercase
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int n;
	n = 1;
	while (n<=10)
	{
        	char ch;
		for (ch='a'; ch<='z'; ch++)
		{
                	_putchar(ch);
		}
		_putchar('\n');

		n = n + 1;
	}
	
}
