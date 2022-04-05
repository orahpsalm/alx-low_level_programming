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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
