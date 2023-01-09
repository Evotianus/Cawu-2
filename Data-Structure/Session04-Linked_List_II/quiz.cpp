// Contoh ada input "10 7 11 4 8"
// Maka proses linked list nya adalah

// Mulai dari 10, menjadi element tengah
// Input 7 masuk, menjadi 7 10
// Input 11 masuk, menjadi 7 10 11
// Input 4 masuk, menjadi 4 7 10 11
// Input 8 masuk, menjadi 4 7 8 10 11

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = 0;
struct Node *tail = 0;

struct Node * createNode(int x) {
    struct Node *tmp = (struct Node *) malloc(sizeof(struct Node));
    tmp->val = x;
    tmp->next = NULL;
    tmp->prev = NULL;
}

void validation(struct Node *body) {
    // do {
    //     if (body->val < head->val) {
    //         body->next = head;
    //         head->prev = body;
    //         head = body;
    //     }
    // } while (head->prev);

    // do {
    //     if (body->val > tail->val) {
    //         if ()
    //         body->prev = tail;
    //         tail->next = body;
    //         tail = body;
    //     }
    // } while (tail->next);

    if (body->val < head->val) {
        body->next = head;
        head->prev = body;
        head = body;
    } else if (body->val > tail->val) {
        body->prev = tail;
        tail->next = body;
        tail = body;
    } else {
        struct Node *iteration = head;
        // printf("head: %d | tail: %d\n", head->val, tail->val);
        while (iteration->next->val < body->val) {
            iteration = iteration->next;
        }
        body->prev = iteration;
        body->next = iteration->next;
        iteration->next = body;
        iteration->next->prev = body;
    }
    

    // Metode Pak Fikri
    // if (head != tail) {
    //     while ()
    // }
}

int main() {
    if (head == NULL && tail == NULL) {
        head = tail = createNode(10);
    }

    struct Node *body1 = createNode(7);
    
    validation(body1);

    struct Node *iteration = head;
    while (iteration) {
        // printf("%d\n", iteration->val);
        iteration = iteration->next;
    }

    struct Node *body2 = createNode(11);
    
    validation(body2);

    iteration = head;
    while (iteration) {
        // printf("%d\n", iteration->val);
        iteration = iteration->next;
    }

    struct Node *body3 = createNode(4);
    
    validation(body3);

    iteration = head;
    while (iteration) {
        printf("%d\n", iteration->val);
        iteration = iteration->next;
    }

    struct Node *body4 = createNode(8);
    
    validation(body4);

    iteration = head;
    while (iteration) {
        printf("%d\n", iteration->val);
        iteration = iteration->next;
    }

    return 0;
}