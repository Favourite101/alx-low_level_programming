#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add two numbers
 * @a: first num
 * @b: second num
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
 * op_sub - subtract two numbers
 * @a: first num
 * @b: second num
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;

	return (diff);
}

/**
 * op_mul - multiply two numbers
 * @a: first num
 * @b: second num
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	int prod;

	prod = a * b;

	return (prod);
}

/**
 * op_div - divide one number by another
 * @a: first num
 * @b: second num
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	int quot;

	quot = a / b;

	return (quot);
}

/**
 * op_mod - finds the remainder of a division
 * @a: first num
 * @b: second num
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;

	return (mod);
}
