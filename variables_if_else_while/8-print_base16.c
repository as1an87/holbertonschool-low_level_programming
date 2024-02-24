#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0 then letter a to f
 *
 * Return: Always 0.
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)

		putchar(number);

	for (letter = 'a'; letter <='z'; letter++)

		putchar(letter);

	printf("\n");
	return (0);
}
