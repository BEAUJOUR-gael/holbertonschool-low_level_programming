#include "main.h"

/**
 * print_rev - affiche une chaîne de caractères en ordre inverse
 * @s: pointeur vers la chaîne à inverser
 *
 * Return: rien (void)
 */
void print_rev(char *s)
{
	int len = 0;

	/* Trouver la longueur de la chaîne */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Afficher les caractères en sens inverse */
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}

