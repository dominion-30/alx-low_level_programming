#include "main.h"
#include <stdio.h>

/**
* reverse_array - function that reverses the content of an array of integers
* @a: array of type int
* @n: the  number of elements to reverse
* Return: void
*/

void reverse_array(int *a, int n)
{	
	while(n>=0)
	{
		printf("%d",a[n]);
		n = n - 1;

	}
}

