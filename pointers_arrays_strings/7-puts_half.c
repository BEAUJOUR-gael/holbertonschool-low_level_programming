#include "main.h"

/**
 * puts_half - affiche la deuxième moitié d'une chaîne de caractères
 * @str: pointeur vers la chaîne à afficher
 *
 * Return: rien (void)
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	/* Trouver la longueur de la chaîne */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Calculer le point de départ */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	/* Afficher à partir du milieu */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}

