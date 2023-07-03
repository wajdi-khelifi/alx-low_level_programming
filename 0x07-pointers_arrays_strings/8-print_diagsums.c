#include "main.h"
/**
* print_diagsums - print sums of diagonals in matrix
* @a: matrix
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int diagsum1 = 0;
	int diagsum2 = 0;
	int j, i;

	for (j = 0; j < size; j++)
	{
		i = (j * size) + j;
		diagsum1 = diagsum1 + a[i];
	}
	for (j = 1; j <= size; j++)
	{
		i = (j * size) - j;
		diagsum2 = diagsum2 + a[i];
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}
