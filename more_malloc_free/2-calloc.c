#include "main.h"
#include <stdio.h>
/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nemb * size); i++)
			b[i] = 0;
		return (b);
	}
	else 
		return (NULL);
}
