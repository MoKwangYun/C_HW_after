#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {
	int num[10];
	printf("뽑힌 난수 10개: \n");

	int ran = time(NULL);
	srand(ran);

	
	int numb[5] = { 0 };
	for (int i = 0; i < 10; i++) {
		num[i] = rand() % 49;
		printf("%d  ", num[i]);
		
		
		numb[num[i] / 10]++;
	}

	int** arr;
	arr = malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; i++) {
		printf("\n10의 자리가 %d 인 수 : %d개", i, numb[i]);
		arr[i] = malloc(sizeof(int) * numb[i]);
	}
	

	
	
	
	for (int m = 0; m < 10; m++) {
		int temp = 0;
		for (int n = m; n < 10; n++) {
			if (num[m] > num[n]) {
				temp = num[m];
				num[m] = num[n];
				num[n] = temp;
			}
		}
	}

	int p = 0;
	for (int l = 0; l < 5; l++) {
		printf("\n");
		int sum = 0;

		if (numb[l] != 0)
			printf("arr[%d] =", l);

		for (int j = 0; j < numb[l]; j++) {
			arr[l][j] = num[p++];
			sum += arr[l][j];
			printf(" %d ", arr[l][j]);

			if (j != numb[l] - 1)
				printf("+");
		}

		if (numb[l] != 0 && numb[l] != 1)
			printf("= %d", sum);
		
	}

	for (int k = 0; k < 5; k++) {
		if (numb[k] == 0) {
			arr[k] = malloc(sizeof(int) * 1);
			arr[k][0] = 1;
		}
		
	}



	
		
	
	
	

	/*for (int k = 0; k < 10; k++) {
		printf("%d  ", num[k]);
	}*/

	return 0;
}