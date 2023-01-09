// Double Linked List
// Input sorting data

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
    struct Node *prev;
    struct Node *next;
};

struct Node *head = 0;
struct Node *tail = 0;

struct Node * createNode(int x) {
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
    temp->val = x;
    temp->next = NULL;
    temp->prev = NULL;
}

void validation(struct Node *body) {
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

        while (iteration->val <= body->val && iteration->next->val <= body->val) {
            iteration = iteration->next;
        }
        body->prev = iteration;
        body->next = iteration->next;
        iteration->next = body;
        iteration->next->prev = body;
        printf("ittr: %d\n", iteration->val);
    }
}

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;

        scanf("%d", &num);

        if (head == NULL && tail == NULL) {
            head = tail = createNode(num);
        } else {
            struct Node *body = createNode(num);

            validation(body);
        }

        struct Node *iteration = head;

        while (iteration) {
            printf("%d ", iteration->val);

            iteration = iteration->next;
        }
        printf("\n");
    }

    return 0;
}