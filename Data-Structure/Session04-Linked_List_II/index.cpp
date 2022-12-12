#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = 0;
struct Node *tail = 0;

// Fungsi createNode
struct Node * createNode(int x) {
    // Block memory
    struct Node *tmp = (struct Node *) malloc(sizeof(struct Node));

    tmp->val = x;
    tmp->prev = NULL;
    tmp->next = NULL;

    return tmp; // Idk if this is necessary or not (Kata bapaknya musti pake yowes dah)
}

int main() {
    // Case 1: double linked list masih kosong
    if (head == NULL && tail == NULL) {
        head = tail = createNode(5); // Gunanya untuk set head dan tail menjadi node yang val nya 5 (tetap 1 node yang sama)
    }

    struct Node *iter = head;

    while (iter) {
        printf("%d\n", iter->val);
        iter = iter->next;
    }
    printf("\n");

    // Extra Case 5 Delete: Hanya 1 element
    /*  
        free(head);
        head = tail = NULL; 
    */

    // Case 2: Insert last atau after tail
    struct Node *tmp = createNode(10);
    tail->next = tmp;
    tmp->prev = tail;
    tail = tmp;

    iter = head;
    while (iter) {
        printf("%d\n", iter->val);
        iter = iter->next;
    }
    printf("\n");

    // Extra Case 6 : Delete element head
    /*  
        head = head->next;
        free(head->prev);
        head->prev = NULL; 
    */

    struct Node *tmp1 = createNode(15);
    tail->next = tmp1;
    tmp1->prev = tail;
    tail = tmp1;

    iter = head;
    while (iter) {
        printf("%d\n", iter->val);
        iter = iter->next;
    }
    printf("\n");

    // Extra Case 8: Delete element selain head dan tail (melakukan iterasi untuk mencari element)
    struct Node *iterDel = head;
    int x = 10;
    while (iterDel->next->val != x) { // Mencari element yang ingin dihapus
        iterDel = iterDel->next;
    }

    struct Node *a = iterDel;
    struct Node *del = iterDel->next;
    struct Node *b = iterDel->next->next;

    a->next = b;
    b->prev = a;
    free(del);

    iter = head;
    while (iter) {
        printf("%d\n", iter->val);
        iter = iter->next;
    }
    // Extra Case 7: Delete tail
    /*
        tail = tail->prev;
        free(tail->next);
        tail->next = NULL;
    */

    // Print linked list dari belakang melalui prev
    /* 
        struct Node *iterBack = tail;

        while (iterBack) {
            printf("%d\n", iterBack->val);
            iterBack = iterBack->prev;
        }
        printf("\n");
    */

    // Case 3: Insert Head
    /* 
        struct Node *tmp2 = createNode(20);
        tmp2->next = head;
        head->prev = tmp2;
        head = tmp2;
        
        iter = head;
        while (iter) {
            printf("%d\n", iter->val);
            iter = iter->next;
        }
    */

    // Case 4: membuat insert node antara head dan tail, jika double linked list isinya baru head dan tail saja (2 node)
    /* Dibikin di file "case4.cpp" */

    // Case 5: 

    return 0;
}