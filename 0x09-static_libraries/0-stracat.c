#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: First string
 * @src: Second string
 * Return: Concatenated character
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

		while (dest[i++])
			dest_len++;

		for (i = 0; src[i]; i++)
			dest[dest_len++] = src[i];

		return (dest);
}
