#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct Node {
    int val;
    struct Node *next;
};

struct Node *stack = NULL;

struct Node * createNode(int x) {
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
    temp->val = x;
    temp->next = NULL;

    return temp;
}

void push(int x) {
    if (stack == NULL) {
        stack = createNode(x);
    } else {
        struct Node *temp = createNode(x);
        temp->next = stack;
        stack = temp;
    }
}

void printStack() {
    struct Node *iter = stack;

    while (iter) {
        printf("%d ", iter->val);

        iter = iter->next;
    }

    printf("\n");
}

struct Node * pop() {
    if (!stack) {
        struct Node *temp = NULL;
        return temp;
    }

    struct Node *deleteNode = stack;
    struct Node *temp = createNode(deleteNode->val);
    stack = deleteNode->next;

    free(deleteNode);

    return temp;
}

struct Node * top() {
    struct Node *temp = stack;
    return temp;
}

int isFull() {
    struct Node *iter = stack;
    
    int count = 0;

    while(iter) {
        count++;
        iter = iter->next;
    }

    if (count == MAX) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    push(10);
    push(5);
    push(5);
    push(5);
    push(5);
    printStack();

    printf("Is array full? %d\n", isFull());

    struct Node *topData = top();
    printf("Top data: %d\n", topData->val);

    struct Node *popped = pop();
    printStack();
    printf("Pop data: %d\n", popped->val);

    popped = pop();
    printStack();
    printf("Pop data: %d\n", popped->val);


    return 0;
}