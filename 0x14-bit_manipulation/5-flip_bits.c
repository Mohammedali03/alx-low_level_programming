#include "main.h"

/**
 * count_set_bits - set bits in the XOR result
 * @n: result of XOR
 * Return: count
 */


int count_set_bits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}


/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to other one.
 * @n: the first number
 * @m: thr second number
 * Return: the number of bits to flip
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_set_bits(n ^ m));
}
