#include "main.h"

/**
 * puts2 - affiche un caractère sur deux d'une chaîne
 * @str: pointeur vers la chaîne à afficher
 *
 * Return: rien (void)
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

