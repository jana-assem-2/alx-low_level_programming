#include "main.h"

/**
 * _strncpy - this is startpoint
 * this is a program that do a  function that copies a string.
 * Return: dest
 * @dest:this is the var that return with the copy content
 * @src: this is the var that i copy from
 * @n: this is the number that  i copy the content and stop to the index n
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; ((src[i] != '\0') && (i < n)); i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
