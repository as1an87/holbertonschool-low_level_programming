#include <stdio.h>
/**
 *main - fizzbuzz function
 *@n: numbers
 */
int main(void)
{
	int n;
	for (n = 0; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz");
		}
		else if (n % 3 != 0 && n % 5 == 0)
		{
			printf("Buzz");
		}
		else 
		{
			printf("%d", n);
		}
		printf("\n");
	}
}
