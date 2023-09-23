#include "main.h"

/**
 * leet - startpoint
 * this is a function that do  encodes a string into 1337.
 * @c: this is the var stored the content do encode
 * Return: cp
*/

char *leet(char *c)
{
	unsigned int i;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1 };
	char *cp = c;

	while (*c)
	{
		for (i = 0; i < (sizeof(key) / sizeof(char)); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}
	return (cp);
}
