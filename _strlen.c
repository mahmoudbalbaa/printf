#include "main.h"

/**
* _strlen - function that takes a pointer
* @s: pointer
* Return: int
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strlenc - function that takes a pointer
 * @s: pointer
 * Return: int
 */

int _strlenc(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
