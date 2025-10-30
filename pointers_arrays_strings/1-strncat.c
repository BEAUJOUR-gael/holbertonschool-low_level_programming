#include "main.h"

/**
 * _strncat - concatène deux chaînes de caractères en utilisant au plus n octets
 * @dest: pointeur vers la chaîne de destination
 * @src: pointeur vers la chaîne source
 * @n: nombre maximal d'octets de src à ajouter à dest
 *
 * Return: pointeur vers dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Trouver la fin de dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Ajouter jusqu’à n caractères de src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractère de fin de chaîne */
	dest[i] = '\0';

	return (dest);
}

