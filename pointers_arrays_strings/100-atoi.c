#include "main.h"

/**
 * _atoi - convertit une chaîne de caractères en entier
 * @s: pointeur vers la chaîne à convertir
 *
 * Return: entier obtenu à partir de la chaîne
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			num = (num * 10) + (s[i] - '0');
		}
		else if (started)
			break;

		i++;
	}

	return (num * sign);
}

