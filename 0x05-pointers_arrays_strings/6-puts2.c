#include "main.h"

/**
 * puts2 - function to print every character of string
 * starting with first character, then new line.
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');

