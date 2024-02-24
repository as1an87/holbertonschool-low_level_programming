#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int lst_digit = n % 10;

	if (lst_digit < 0)
		lst_digit *= -1;

	_putchar(lst_digit + '0');

	return (lst_digit);
}
