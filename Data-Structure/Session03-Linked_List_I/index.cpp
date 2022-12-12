#include <stdio.h>
#include <stdlib.h>

struct tnode {
    int val;
    struct tnode *next;
};

struct tnode *head;

void createNode() {

}

int main() {
    struct tnode *head = (struct tnode *) malloc(sizeof(struct tnode));
    head->val = 10;
    head->next = NULL;

    struct tnode *node = (struct tnode *) malloc(sizeof(struct tnode));
    node->val = 25;
    node->next = head;
    head = node;

    struct tnode *p = head;

    while (p != NULL) {
        printf("%d\n", p->val);
        p = p->next;
    }

    return 0;
}