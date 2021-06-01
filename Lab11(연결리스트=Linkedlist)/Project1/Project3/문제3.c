#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct NODE {
	int data;
	struct NODE* next;
} NODE;

void addFirst(struct NODE** head, int data);
int main() {
	struct NODE* head = NULL;
	int num[3] = { 10,20,30 };
	int i = 0;

	while (i < 3) {

		addFirst(&head, num[i]);
		head->data = num[i];

		i++;
	}

	printf("%d -> %d -> %d", head->data, head->next->data, head->next->next->data);
	return 0;
}

void addFirst(struct NODE** head, int data) {
	NODE* cur = NULL;
	cur = malloc(sizeof(NODE));
	cur->next = NULL;
	if (*head == NULL) {
		*head = cur;
	}
	else {
		(cur)->next = *head;
		*head = cur;
	}
}