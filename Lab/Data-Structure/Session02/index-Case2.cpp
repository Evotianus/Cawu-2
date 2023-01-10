#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Food {
    char name[100];
    int price;
    struct Food *next;
} *head = NULL, *tail = NULL;

struct Food * createFood(char name[100], int price) {
    struct Food *food = (struct Food *) malloc(sizeof(struct Food));
    strcpy(food->name, name);
    food->price = price; // (*food).price = price;
    food->next = NULL;
}

void pushHead(char name[], int price) {
    struct Food *newFood = createFood(name, price);

    if (!head) {
        head = tail = newFood;
    } else {
        newFood->next = head;
        head = newFood;
    }
}

void pushTail(char name[], int price) {
    struct Food *newFood = createFood(name, price);

    if (!tail) {
        head = tail = newFood;
    } else {
        tail->next = newFood;
        tail = newFood;
    }
}

void printFood() {
    struct Food *curr = head;

    while (curr) {
        printf("%s %d\n", curr->name, curr->price);

        curr = curr->next;
    }
}

void pushMid(char name[], int price) {
    if (!head || price < head->price) {
        pushHead(name, price);
    }
    else if (price >= tail->price) {
        pushTail(name, price);
    }
    else {
        struct Food *newFood = createFood(name, price);

        struct Food *curr = head;

        while (curr->next != NULL && curr->next->price < price) {
            curr = curr->next;
        }

        newFood->next = curr->next;
        curr->next = newFood;
    }
}

void popHead() {
    if (!head) {
        return;
    }
    else if (head == tail) {
        free(head);
        head = tail = NULL;
    }
    else {
        struct Food *temp = head->next;
        free(head);
        head = temp;
    }
}

void popTail() {
    if (!head) {
        return;
    }
    else if (head == tail) {
        free(head);
        head = tail = NULL;
    }
    else {
        struct Food *curr = head;

        while (curr->next != tail) {
            curr = curr->next;
        }

        free(tail);
        tail = curr;
        tail->next = NULL;
    }
}

void popMid(int target) {
    if (!head) {
        return;
    }
    else if (head->price == target) {
        popHead();
    }
    else if (tail->price == target) {
        popTail();
    }
    else {
        struct Food *curr = head;

        while (curr->next != NULL && curr->next->price != target) {
            curr = curr->next;
        }

        if (curr->next == NULL || curr->next->price != target) {
            printf("Data to be deleted is not found!\n");
        }
        else {
            struct Food *temp = curr->next->next;
            free(curr->next);
            curr->next = temp;
        }
    }
}

int main() {
    int arr[100];

    // struct Food food = {
    //     10000,
    //     NULL
    // };

    // pesen memori, memory allocation: malloc

    char word[100];

    pushHead(strcpy(word, "Sate Padang"), 23000);
    pushHead(strcpy(word, "Nasi Goreng"), 17000);
    pushHead(strcpy(word, "Pempek Palembang"), 28000);
    // pushHead("Nasi Goreng", 17000);
    // pushTail("Pempek Palembang", 28000);
    // pushMid("", 25000);
    // pushMid(10000);
    // pushMid(49000);

    // popHead();
    // popTail();
    // popMid(25000);
    // popMid(17000);
    // popMid(20000);

    // printf("%d\n", head->price);
    printFood();

    return 0;
}