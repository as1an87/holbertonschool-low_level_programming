#include "main.h"
/**
 *print_square - function that prints square
 *@size: size of square
 *
 */
void print_square(int size)
{
	int l, c;

	if (size <= 0)
		_putchar('\n');
	for (l = 1; l <= size; l++)
	{
		for (c = 1; c <= size; c++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
}
