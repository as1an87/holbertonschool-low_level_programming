#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @n: number
 * @s: target
 * @b: constant byte
 * Return:  s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);

}
