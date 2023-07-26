#include "main.h"

/**
 * print_int - prints intrger
 * @n: ineger to print
 *
 * Return: void count
 */

void print_int(int n)
{
	if (n != 0)
	{
		if (n / 10)
		{
			print_int(n / 10);
			p_utchar(n % 10 + '0');
		}
	}
}
