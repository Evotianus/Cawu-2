// Single Linked List
// Input data ke dalam node

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
};

struct Node *head = 0;
struct Node *tail = 0;

struct Node * createNode(int x) {
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
    temp->val = x;
    temp->next = NULL;

    return temp;
}

int main() {
    if (head == NULL && tail == NULL) {
        head = tail = createNode(5);
    }

    // struct Node *iteration = head;
    // while (iteration) {
    //     printf("%d\n", iteration->val);
    //     iteration = iteration->next;
    // }

    int n;

    printf("Input Jumlah Data yang Ingin di Input: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        printf("Input value %d: ", i + 1);
        scanf("%d", &num);

        struct Node *data = createNode(num);

        tail->next = data;
        tail = data;
    }

    struct Node *iteration = head;

    while (iteration) {
        printf("%d\n", iteration->val);
        iteration = iteration->next;
    }

    return 0;
}