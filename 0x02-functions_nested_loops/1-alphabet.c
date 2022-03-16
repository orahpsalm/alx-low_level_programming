#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet - prints alphabets in lower case and the new line
 *
 * Return: Always (0) indicating success
 */
int main(void)
{
	void print_alphabet(void)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');
	return (0);
}
