#include <stdio.h>

/**
* main - entry point
*
* description: print  1 to 100 but for;
* multiples of 3 print Fizz
* multiples of 5 print Buzz
* multiples of both print FizzBuzz
*
* Returns: Always 0 success
*/

int main()

{
	 int num;
	 for (num =1; num <=100; num++)
	 {
		if (num % 3 == 0)

		{	
			printf(" Fizz ");

		}

		else if (num % 5 == 0)
		{
		
			printf(" Buzz ");
		}

		else if (num % 3 == 0 && num % 5 == 0 )
		{

			printf(" FizzBuzz ");
		}

		else
		{
			printf(" %d ",num);
		}


	}
	printf("\n");
	return (0);

}
