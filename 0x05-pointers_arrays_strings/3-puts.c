#include "main.h"

#include <string.h>


/** 
* puts(char *str) - prints a string followed by newline
*
*/

void _puts(char *str)

{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
