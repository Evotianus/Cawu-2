#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = 0;
struct Node *tail = 0;

struct Node * createNode(int x) {
    struct Node *tmp = (struct Node *) malloc(sizeof(struct Node));
    tmp->val = x;
    tmp->next = NULL;
    tmp->prev = NULL;

    return tmp;
}

int main() {
    if (head == NULL && tail == NULL) {
        head = tail = createNode(5);
    }

    struct Node *iteration = head;
    while (iteration) {
        printf("%d\n", iteration->val);
        iteration = iteration->next;
    }
    printf("\n");

    struct Node *tmp1 = createNode(10);
    tmp1->prev = head;
    head->next = tmp1;
    tail = tmp1;

    iteration = head;
    while (iteration) {
        printf("%d\n", iteration->val);
        iteration = iteration->next;
    }
    printf("\n");

    struct Node *body = createNode(8);
    body->prev = head;
    body->next = tail;
    head->next = body;
    tail->prev = body;

    iteration = head;
    while (iteration) {
        printf("%d\n", iteration->val);
        iteration = iteration->next;
    }

    // printf("head: %d | tail: %d\n", head->val, tail->val);

    return 0;
}