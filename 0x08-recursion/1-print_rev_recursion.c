#include "main.h"
#include <stdio.h>
#include<string.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 * Return: no return.
 */


void _print_rev_recursion(char *s)
{
	int len;
	
	len = strlen(s);

	if (len == 0)
	{
		_putchar(' ');

	}
	else
	{
		
		while (0< len)
		{
			_putchar(s[len]);
			len--;

		}
		

	}
	 
	

}
