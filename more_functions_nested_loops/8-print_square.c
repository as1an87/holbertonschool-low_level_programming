#include "main.h"
/**
 *print_square - function that prints square
 *@size: size of square
 *
 */
void print_square(int size)
{
	int l,c;

	for (l = 0; l <= size; l++)
	{
		for (c = 0; c <= size; c++)
		{
			_putchar(35);
		}
	}
}
