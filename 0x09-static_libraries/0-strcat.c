#include "main.h"

/**
 * _strcat - startpoint
 * this is a c program that do a function that concatenates two strings.
 * Return: dest
 * @dest: this is a var need to cp content in src to it
 * @src: thisis the var tha cp content from it
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++)
		dest[j + i] = src[j];
	return (dest);
}
