#include "main.h"

/**
 * convert_binary - covert int to binary
 * @nb: the interger to convert
 *
 * Return: Always void
 */

void convert_binary(unsigned int nb)
{
	if (nb / 2 != 0)
	{
		convert_binary(nb / 2);
	}
	p_utchar(nb % 2 + '0');
}
