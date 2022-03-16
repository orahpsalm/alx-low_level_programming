#include "main.h"

/**
 * main - check the code.
 * Description: 'c' is the name of the int variable
 * _islower - name of function
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
