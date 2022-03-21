#include "main.h"

/**
 * _puts - prints string, then new line to stdout
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
