#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * Numbers must be separated by ,, followed by a space
 *Numbers should be printed in ascending order
 *You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 *All your code should be in the main function
 *You can only use putchar four times maximum in your code
 *You are not allowed to use any variable of type char
 * Return: Always 0.
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
		if (number == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
