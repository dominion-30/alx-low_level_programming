#include <stdio.h>

/**
* main - all alphabet except e and q
*
**/
int main(void)
{

	char letter;
	for(letter = 'a'; letter <='z'; letter++){

		if (letter =='e' || letter =='q')
		{

	
			continue;
		}	
		else
		{
			putchar(letter);
		}	
	}
	putchar('\n');	
	return(0);

}
