#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Node {
    int val;
    struct Node *next;
};

struct Node *stack = NULL;

void printStack() {
    struct Node *iter = stack;

    while (iter) {
        printf("%d ", iter->val);
        iter = iter->next;
    }
}

struct Node * createNode(int x) {
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
    temp->val = x;
    temp->next = NULL;

    return temp;
}

void push(int x) {
    struct Node *temp = createNode(x);
    temp->next = stack;
    stack = temp;
}

int pop() {
    struct Node *temp = stack;
    int val = temp->val;
    stack = temp->next;

    free(temp);
    
    return val;
}


int main() {
    // Variable untuk menyimpan notasi yang dimasukkan
    char s[100];

    scanf("%s", s);

    int i = 1;

    // Bikin stack dari karakter pertama
    stack = createNode(s[0] - '0');

    // Final value
    int final = 0;

    while (s[i]) {
        // Push jika dapat digit
        if (isdigit(s[i])) {
            push(s[i] - '0');
        } 
        // Pop dan push jika operator
        else {
            int a = pop();
            int b = pop();

            int x;
            
            // Switch case untuk cek apa operator yang digunakan
            switch (s[i])
            {
            case '+': {
                x = b + a;
                push(x);
                break;
            }
            case '-': {
                x = b - a;
                push(x);
                break;
            }
            case '*': {
                x = b * a;
                push(x);
                break;
            }
            case '/': {
                x = b / a;
                push(x);
                break;
            }
            }
        }
        i++;
    }

    final = pop();
    printf("%d", final);

    return 0;
}