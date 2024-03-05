#include "main.h"
/**
 * _memcpy - function that copies n bytes src to dest
 * @src: bytes copies from
 * @dest: bytes copies to
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
