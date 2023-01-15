#include "sandpiles.h"
/**
 * print_grid - Print 3x3 grid
 * @grid: array 3*3
 *
 */
static void print_grid_sum(int grid1[3][3], int grid2[3][3])
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
