#include "main.h"
/**
 * print_diagonal - print n time _
 * @n: n number of lines
 * Return :0
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar (32);
		i++;
	}
	while (i < n)
        {
                _putchar (92);
                i++;
        }
	_putchar ('\n');
}
