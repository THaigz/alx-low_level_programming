#include "main.h"

/**
 * *_strcat - this is a function strcat
 * @dest: first parameter
 * @src: second parameter
 * Return: returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
