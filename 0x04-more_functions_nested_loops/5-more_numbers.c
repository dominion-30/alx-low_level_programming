#include "main.h"

/**
* more_numbers -  prints 0 to 14 ten times
*
* Return: void
*/

void more_numbers(void)
{  
	int number, tens, unit, row;
	for (row=0; row<=10; row++)
	{
		for (number=0; number<=14; number++)
		{
			tens = number /10;
			unit = number % 10;

			if (number >9)
			{
				_putchar(tens + '0');
			}
			_putchar(unit + '0');
		
		}
		_putchar('\n');
	}

}



