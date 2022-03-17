#include "main.h"

/** 
* void print_most_numbers(void) 
* sends 0 to 9 to stdout execept 2 and 4
* Return void
*/

void print_most_numbers(void)
{	char i;
	for (i = '0'; i<='9'; i++)
	{
		if (i=='2' || i =='4')
		{
			continue;
		}

		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');

}
