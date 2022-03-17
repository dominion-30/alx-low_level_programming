#include "main.h"

/**
* print_square - entry point
*
* description: function that prints a square followed by a newline
*
* Return void
*/
void print_square(int size)
{

	if (size == 0 || size < 0)

	{
		_putchar('\n');
	}

	else
	{
		int row, column;
		for(row = 1; row<=size; row++)
		{
			

			for (column = 1; column<=size; column++)
			{	
				_putchar('#');
			
			
			}

			_putchar('\n');
	   	



		}	
	
	}


}
