#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* head = NULL;
Node* tail = NULL;
int main() {
    Node* cur[3] = { NULL };

    int num[3];
    printf("입력 : ");
    scanf("%d", &(num[0]));
    printf("입력 : ");
    scanf("%d", &(num[1]));
    printf("입력 : ");
    scanf("%d", &(num[2]));


    for (int i = 0; i < 3; i++) {
        cur[i] = malloc(sizeof(Node));
        cur[i]->next = NULL;

        if (head == NULL) {
            head = cur[i];
            tail = cur[i];
            head->data = num[i];
        }
        else {
            tail->next = cur[i];
            tail = cur[i];

            tail->data = num[i];
        }
    }

    Node* temp = head;
    for (int i = 0; i < 3; i++) {
        printf("%d", temp->data);
        temp = temp->next;

        if (i != 2)
            printf(" -> ");
    }

    for (int i = 0; i < 3; i++)
        free(cur[i]);

    return 0;
}