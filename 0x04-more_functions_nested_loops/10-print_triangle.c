#include "main.h"

/**
* print_triangle - entry point
*
* description: uses _putchar function to print to stdout
*
* Return void
*/

void print_triangle(int size)

{

	if (size == 0 || size < 0)

	{
		_putchar('\n');
	}

	else
	{
		int row, spaces, hashes;

		for (row = 1; size>=row; row++)
		{
			for (spaces = size - row ; spaces > 1; spaces--)

			{
				_putchar(' ');
			}

			for ( hashes = 1; hashes <= row; hashes++)
			{
				
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
