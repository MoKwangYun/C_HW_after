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

	person p[3] = { {"ȫ�浿", "011-1111-1111", "����� ���α� ��ô��"}, {"����ȣ", "017-3245-3278", "����� ������ ���"},{"����ȣ","011-2222-2456", "��⵵ �Ⱦ�� ��굿" } };
	
	FILE* f;

	if (fopen_s(&f, "data.bin", "wb") != 0) {
		printf("�����̿����� �ʽ��ϴ�.\n");
		exit(1);
	}

	for (int i= 0; i < 3; i++) {
		fwrite(&p[i], sizeof(person), 1, f);
	}
	
	fclose(f);

	return 0;
}