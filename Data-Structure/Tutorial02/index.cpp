#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;
struct Node *tail = NULL;

struct Node * createNode(int x) {
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
    temp->val = x;
    temp->next = NULL;
    // temp->prev = NULL;

    return temp;
}

void insertFront(int x) {
    // struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
    // temp->val = x;
    // temp->next = head;
    // head = temp;

    struct Node *temp = createNode(x);

    temp->next = head;
    head = temp;
}

void insertLast(int x) {
    struct Node *temp = createNode(x);

    // struct Node *iterator = head;
    // while (iterator->next) {
    //     iterator = iterator->next;
    // }

    // iterator->next = temp;
    // temp->prev = iterator;

    tail->next = temp;
    tail = temp;
}

void printList() {
    struct Node *iterator = head;

    while (iterator) {
        printf("%d\n", iterator->val);
        iterator = iterator->next;
    }
    printf("\n");
}

int main() {
    // head = (struct Node *) malloc(sizeof(struct Node));
    // head->val = 8;
    // head->next = NULL;

    // struct Node *body = createNode(9);
    // head->next = body;
    // body->prev = head;
    // body->next = NULL;

    // printf("%d", head->val);

    // struct Node *iterator = head;
    // while (iterator) {
    //     printf("%d\n", iterator->val);
    //     iterator = iterator->next;
    // }


    head = tail = createNode(4);

    insertFront(3);

    // printList();

    insertLast(7);

    // printList();

    // int x = 8;
    // // Delete Node
    // // Jika elemen hanya 1
    // if (!head->next && head->val == x) {
    //     free(head);
    // } else if (head->val == x) {
    //     // Delete elemen paling depan
    //     // free(head);
    //     struct Node *deleteNode = head;
    //     head = head->next;
    //     deleteNode->next = NULL;
    //     free(deleteNode);
    // } else {
    //     // Delete elemen paling belakang
    //     struct Node *iterator = head;

    //     while (iterator->next && iterator->next->val != x) {
    //         iterator = iterator->next;
    //     }
    //     // printf("Last: %d\n", iterator->val);
    //     struct Node *deleteNode = iterator->next;
    //     iterator->next = iterator->next->next;
    //     free(deleteNode);
        
    // }
    printList();

    int num = 5;

    if (num < head->val) {
        insertFront(num);
    } else if (num > tail->val) {
        insertLast(num);
    } else {
        struct Node *temp = createNode(num);

        struct Node *iterator = head;

        while (iterator->next->val < num) {
            iterator = iterator->next;
        }
        temp->next = iterator->next;
        iterator->next = temp;
        // temp->next->next = NULL;
        
        // printf("Num: %d\n", iterator->val);
    }
    printList();

    return 0;
}