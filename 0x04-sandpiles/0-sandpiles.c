#include "sandpiles.h"
/**
  * print_grid - Print 3x3 grid
  * @grid: 2D array 3*3
  *
  */

static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
  * copy - copy of two sandpiles.
  * @scr: 2D array.
  * @des: 2D array.
  */

void copy(int scr[3][3], int des[3][3])
{
	int i, j;

	for (i = 0; i < 3;i++)
{
		for (j =0; j < 3;j++)
		{
			des[i][j] = scr[i][j];
	}
	}
}
