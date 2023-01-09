#include <stdio.h>

#define MAX 1

int stack[MAX];

int topIndex;

void initStack() {
    
}

void push(int val) {
    if (topIndex == MAX - 1) {

    }

    // Increase topIndex
    topIndex++;

    // Insert ke Array
    stack[topIndex] = val;
}

int pop() {
    if (topIndex == -1) {
        return -1;
    }

    int val = stack[topIndex];

    topIndex--;

    return val;
}

int top() {
    return stack[topIndex - 1];
}

void printStack() {
    for (int i = 0; i <= topIndex; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    topIndex = -1;

    push(10);

    push(5);

    printStack();

    pop();

    printStack();

    top();

    return 0;
}