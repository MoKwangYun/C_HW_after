#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
int main() {
	struct Node* head = NULL;
	struct Node* node1 = NULL;
	struct Node* node2 = NULL;


	node1 = malloc(sizeof(struct Node));
	node1->data = 10;
	head = node1;

	node2 = malloc(sizeof(struct Node));
	node2->data = 20;
	node1->next = node2;

	printf("%d -> %d", head->data, head->next->data);



	free(node1);
	free(node2);
	return 0;
}