#include "main.h"

/**
 * print_numbers - affiche les chiffres de 0 à 9
 *
 * Return: rien (void)
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

