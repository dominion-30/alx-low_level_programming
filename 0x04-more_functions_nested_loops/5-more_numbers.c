#include "main.h"

/**
* more_numbers -  prints 0 to 14 ten times
*
* Return: void
*/

void more_numbers(void)
{    	/* counter = counter variable*/ 
	 int counter;
	 counter = 1;
	 while (counter <=10)
	 {	/*num  keeps track of the number*/
	 	int num;
		for (num = 0; num<=14; num++)
		{
			_putchar(num);
		} 
		counter = counter + 1;
	 }
	 _putchar('\n');


}
