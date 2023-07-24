#include "main.h"

/**
 * case_s - handles case s
 * @s: the string to handle
 *
 * Return: Void
 */

int case_s(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] != '\0'; i++)
	{
		p_utchar(s[i]);
		count++;
	}
	return (count);

}
