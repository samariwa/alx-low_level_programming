#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int(*calc) (int, int);
	
	if (argc != 4)
	{
		printf("Less args\n");
		return (1);
	}

	calc = get_op_func(argv[2]);
	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));

   
    return (0);
}
