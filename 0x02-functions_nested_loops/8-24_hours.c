#include "main.h"
/**
 *jack_bauer - this is the entry point
 *
 *Return: no return
 *
 */
void jack_bauer(void)
{
	int t, u, y, z;

	for (t = 0; t <= 2; t++)
	{
		for (u = 0; u <= 9; u++)
		{
			for (y = 0; y <= 5; y++)
			{
				for (z = 0; z <= 9; z++)
				{
					if (t == 2 && u > 3)
					{
						break;
					}
					_putchar(t + '0');
					_putchar(u + '0');
					_putchar(58);
					_putchar(y + '0');
					_putchar(z + '0');
					_putchar('\n');

				}
			}
		}
	}

}

