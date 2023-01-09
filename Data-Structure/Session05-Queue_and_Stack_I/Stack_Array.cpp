#include <stdio.h>

#define MAX 1000

int stack[MAX];

int topIndex;

void push(int val) {
    // Insert ke Array
    stack[topIndex] = val;

    // Increase topIndex
    topIndex++;
}

int pop() {
    int val = stack[topIndex];

    topIndex--;

    return val;
}

int top() {
    return stack[topIndex - 1];
}

void printStack() {
    for (int i = 0; i < topIndex; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    topIndex = 0;

    push(10);

    push(5);

    printStack();

    pop();

    printStack();

    top();

    return 0;
}