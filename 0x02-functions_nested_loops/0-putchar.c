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
		_putchar(*word);
		word++;
	}
	_putchar('\n');

	return (0);
}
