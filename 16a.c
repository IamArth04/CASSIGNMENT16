#include <stdio.h>
#define N 3
void add(int A[][N], int B[][N], int C[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			C[i][j] = A[i][j] + B[i][j];
}

int main()
{
	int A[N][N] = { { 11, 21, 10 },
					{ 28, 42, 62 },
					{ 43, 53, 38 }, };

	int B[N][N] = { { 12, 115, 41 },
					{ 29, 72, 23 },
					{ 34, 63, 113 }, };

	int C[N][N]; 
	int i, j;
	add(A, B, C);

	printf("Result matrix is \n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%d ", C[i][j]);
		printf("\n");
	}

	return 0;
}
