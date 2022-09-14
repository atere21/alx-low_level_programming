#include <stdio.h>
#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @v: integer input
 * Return: absolute value of v
 */
int _abs(int v)
{
	return (v * ((v > 0) - (v < 0)));
}
