#include "main.h"

/**
* print_line - entry point
*
* Description: use _putchar to print
*
* Return: void
*/

void print_line(int n)

{
	if (n == 0 || n < 0)

	{
		_putchar('\n');
	}
	else
	{
		int num;
		num =1;
		while (num <=n)

		{
			_putchar('_');
			num = num + 1;

		}
		_putchar('\n');
	}

}
