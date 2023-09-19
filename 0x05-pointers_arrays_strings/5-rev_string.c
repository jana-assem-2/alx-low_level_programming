#include "main.h"

/**
 * rev_string - startpoint
 * this is a c program to write a function that prints a string
 * in reverse, followed by a new line
 * @s: this is a var stored a addres of s
*/

void rev_string(char *s)
{
	int k, i;
	char temp;

	for (k = 0; s[k] != '\0'; ++k)
		;
	for (i = 0; i < k / 2; i++)
	{
		temp = s[i];
		s[i] = s[k - 1 - i];
		s[k - 1 - i] = temp;
	}
}
