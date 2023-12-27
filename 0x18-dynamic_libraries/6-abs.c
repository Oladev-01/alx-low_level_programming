#include "main.h"
/**
 *_abs - this is my entry point
 *
 *@j: this is my declared parameter
 *
 *Return: returns 0 for success
 */
int _abs(int j)
{

	if (j < 0)
	{
		int leg;

		leg = j * -1;

		return (leg);
	}
	else
	{
		return (j);
	}


}


