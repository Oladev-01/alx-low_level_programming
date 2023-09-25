#include "main.h"
/**
 *print_chessboard - entry function
 *@a: rows of the chessboard
 *Return: returns null
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%d", a[b][c]);
			if (c == 7)
			{
				printf("\n");
			}
		}
	}
}
