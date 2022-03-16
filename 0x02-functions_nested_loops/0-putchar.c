#include "main.h"

/**
 * main - check description
 * Description: Prints _putchar and then new line
 * Return: Always returns (0)
 */
int main(void)
{
	char *word = "_putchar";

	while (*word != '\0')
	{
		putchar(*word);
		word++;
	}
	putchar('\n');

	return (0);
}
