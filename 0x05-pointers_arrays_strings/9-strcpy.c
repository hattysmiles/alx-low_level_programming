#include "main.h"
/**
 * Strcpy - function that copies string poined to by src
 * @dest: Buffer dest
 * @src: string
 * Return: value pointer to dest
 */
char *_strcpy(char *dest, char *src)
	int index;

	index = 0;

	while (index >= 0)
	{
		dest[index] = src[index];
		if (src[index] == '\0')
		{
			return (dest);
		}
		index++;
	}
	return (dest)
}
