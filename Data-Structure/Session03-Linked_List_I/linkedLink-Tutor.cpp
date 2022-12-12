#include <stdio.h>
#include <stdlib.h>

struct tnode {
    int val;
    struct tnode *next;
};

struct tnode *head;

int main() {
    head = (struct tnode *) malloc(sizeof(struct tnode));

    head->val = 10;
    head->next = NULL;

    struct tnode *iter = head;

    // Traversal
    while (iter) {
        printf("%d\n", iter->val);
        iter = iter->next;
    }

    printf("\n");

    // Block Baru
    struct tnode *neww = (struct tnode *) malloc(sizeof(struct tnode));
    neww->val = 25;
    neww->next = NULL; // (???)
    // Insert depan

    neww->next = head;
    head = neww;

    iter = head;

    while (iter) {
        printf("%d\n", iter->val);
        iter = iter->next;
    }

    printf("\n");

    // Insert belakang
    // Variabel sebagai iterator
    // Start dari head
    // Loop sampai elemen terakhir

    struct tnode *newBack = (struct tnode *) malloc(sizeof(struct tnode));
    newBack->val = 8;
    newBack->next = NULL;

    // Lakukan iterasi untuk linked list
    struct tnode *curr = head;


    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = newBack;

    // Untuk mengembalikan ke depan
    iter = head;

    while (iter) {
        printf("%d\n", iter->val);
        iter = iter->next;
    }

    printf("\n");

    // return 0;

    // Delete element
    struct tnode *iterDel = head;

    int x = 9; // Yang mau di delete

    // Jika element yang ingin dihapus ada di head / paling depan
    if (head->val == x) {
        head = head->next;
        free(iterDel);
    } else {
        // Jika element yang ingin dihapus di tengah atau belakang
        while (iterDel->next->val != x) {
            iterDel = iterDel->next;
        }

        struct tnode *del = iterDel->next;
        iterDel->next = del->next;
        free(del);
    }

    // Untuk mengembalikan ke depan
    iter = head;
    while (iter) {
        printf("%d\n", iter->val);
        iter = iter->next;
    }

    return 0;
}