#include "main.h"
/**
 * find_sqrt - entry function
 * @n: number to find its square root
 * @i: root of the number, n
 * Return: root of the number, n
 *
 */

int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (find_sqrt(n, i + 1));
}
/**
 *_sqrt_recursion - entry function
 *@n: number to find its square root
 *Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (find_sqrt(n, 1));

}
