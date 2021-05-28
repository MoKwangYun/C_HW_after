#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person {
	char name[20];
	char  tell[20];
	char address[80];
};

int main() {
	typedef struct person person;

	person p[3] = { {"홍길동", "011-1111-1111", "서울시 구로구 고척동"}, {"조명호", "017-3245-3278", "서울시 강남구 도곡동"},{"최윤호","011-2222-2456", "경기도 안양시 비산동" } };
	
	FILE* f;

	if (fopen_s(&f, "data.bin", "wb") != 0) {
		printf("파일이열리지 않습니다.\n");
		exit(1);
	}

	for (int i= 0; i < 3; i++) {
		fwrite(&p[i], sizeof(person), 1, f);
	}
	
	fclose(f);

	return 0;
}