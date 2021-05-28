#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int m, n;
	printf("m x n 이차원 배열을 생성합니다.\n");
	printf("m : ");
	scanf("%d", &m);
	printf("n : ");
	scanf("%d", &n);

	int** arr;
	arr = malloc(sizeof(int) * m);
	for (int i = 0; i < m; i++) {
		arr[i] = malloc(sizeof(int) * n);
	}
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("arr[%d][%d] : ", i, j);
			scanf("%d", arr[i]+j);
		}
	}

	printf("이차원배열 :\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d   ",arr[i][j]);
			if (j == n - 1)
				printf("\n");
			
		}
	}
	for (int k = 0; k < m; k++) {
		free(arr[k]);
	}
	
	free(arr);

	return 0;

}
