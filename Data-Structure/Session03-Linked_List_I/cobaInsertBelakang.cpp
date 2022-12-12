#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    Node *next;
};

int main() {
    struct Node *node1 = (struct Node *) malloc(sizeof(struct Node));
    node1->val = 1;
    node1->next = NULL;

    struct Node *node2 = (struct Node *) malloc(sizeof(struct Node));
    node2->val = 2;
    node2->next = NULL;
    node1->next = node2;

    struct Node *head = node1;

    while (head != NULL) {
        printf("%d\n", head->val);
        head = head->next;
    }

    return 0;
}