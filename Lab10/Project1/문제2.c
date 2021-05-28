#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct person {
	char name[30];
	int age;
	struct person* next;
};

int main() {
	FILE* f;

	if (fopen_s(&f, "input.txt", "r") != 0) {
		printf("파일이열리지 않습니다.\n");
		exit(1);
	}

	typedef struct person list;
	list* p1 = NULL;
	list* p2 = NULL;

	p1 = (list*)malloc(sizeof(list));
	fscanf(f, "%s %d",&(p1->name), &(p1->age));

	p2 = (list*)malloc(sizeof(list));
	fscanf(f, "%s %d", &(p2->name), &(p2->age));

	p1->next = p2;

	printf("%s %d\n",p1->name, p1->age);
	printf("%s %d\n", p1->next->name, p1->next->age);

	free(p1);
	free(p2);

	return 0;

}