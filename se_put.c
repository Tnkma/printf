#include "main.h"

/**
 * pu_tchar - prints two putchar for me
 * @c1: first input
 * @c2: seconf input
 *
 * Return: Always void
 */

void pu_tchar(char c1, char c2)
{

	if (c2 != c1)
	{
		p_utchar(c1);
		p_utchar(c2);

	}
	else
	{
		p_utchar(c2);
	}
}