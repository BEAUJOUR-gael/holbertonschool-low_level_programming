#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères
 * @s: pointeur vers la chaîne à inverser
 *
 * Return: rien (void)
 */
void rev_string(char *s)
{
	int i, len;
	char temp;

	len = 0;

	/* Trouver la longueur de la chaîne */
	while (s[len] != '\0')
		len++;

	/* Échanger les caractères du début et de la fin */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

