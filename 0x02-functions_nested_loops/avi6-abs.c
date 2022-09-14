#include "main.h"

/**
 * _abs - function that computes the absoolute
 *        value of an integer
 *
 * @n: takes in integer type input for funtion
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
