#include "main.h"
/**
 * print_diagonal - print n time _
 * @n: n number of lines
 * Return :0
 */
void print_diagonal(int n)
{
	int x, y;
	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(32);
		}

		_putchar(92);
		_putchar('\n');
	}
}
