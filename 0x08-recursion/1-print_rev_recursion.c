#include "main.h"
#include <stdio.h>
#include<string.h>
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
