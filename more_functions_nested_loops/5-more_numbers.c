#include "main.h"
/**
 * more_numbers(void) - print 10 time 1 to 14
 * Return : 0
 */
void more_numbers(void)
{
	char i;
	char j;

	while (i <= '10')
	{
		while  (j <= '14')
		{
			_putchar (j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
