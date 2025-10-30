#include "main.h"

/**
 * _strcat - concatène deux chaînes de caractères
 * @dest: pointeur vers la chaîne de destination
 * @src: pointeur vers la chaîne source
 *
 * Return: pointeur vers dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Trouver la fin de la chaîne dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copier src à la suite de dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractère de fin de chaîne */
	dest[i] = '\0';

	return (dest);
}

