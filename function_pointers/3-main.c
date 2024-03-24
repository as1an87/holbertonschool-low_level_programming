#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int *operator = argv[2];
	int result;

	int (*operation)(int, int) = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
