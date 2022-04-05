#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Counts number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
