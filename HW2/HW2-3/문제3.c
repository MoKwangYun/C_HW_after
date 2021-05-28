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

	FILE* f;
	if (fopen_s(&f, "data.bin", "rb") != 0) {
		printf("파일이열리지 않습니다.\n");
		exit(1);
	}

	person p[3];

	
	fread(&p[0], sizeof(person), 1, f);
	

	int i = 0;
	while (!feof(f)) {
		fprintf(stdout, "%s %s %s\n", p[i].name, p[i].tell, p[i].address);
		i++;
		fread(&p[i], sizeof(person), 1, f);
	}

	fclose(f);

	return 0;
}