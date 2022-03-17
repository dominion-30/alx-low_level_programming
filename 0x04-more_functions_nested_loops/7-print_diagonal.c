#include "main.h"

/**
* print_diagonal - entry point
*
* description: use _putchar() function to print
*
*/

void print_diagonal(int n)
{
	if (n == 0|| n< 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, num_lines;
		for (row = 1; row <=n; row++)
		{
			if (row >1)

			{
				for (num_lines = 1; num_lines <= row - 1; num_lines ++)
				{
					 _putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
	
		}

	}

}
