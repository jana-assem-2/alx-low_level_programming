#include "main.h"

/**
 * *_strcpy -startpoint
 * this is a c program that do a function that copies the string pointed to by
 * src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * Return: the pointer to dest
 * @dest: this arr that src cp to it
 * @src: this arr that cp from it to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
