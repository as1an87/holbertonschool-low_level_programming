#include "main.h"
/**
 *print_square - function that prints square
 *@size: size of square
 *
 */
void print_triangle(int size)
{
	int l, c;

	if (size <= 0)
		_putchar('\n');
	for (l = 1; l <= size; l++)
	{
		for (c = size; c >= 1; c--)
		{
			_putchar(32);
		}
		_putchar(35);
	_putchar('\n');
	}
}
