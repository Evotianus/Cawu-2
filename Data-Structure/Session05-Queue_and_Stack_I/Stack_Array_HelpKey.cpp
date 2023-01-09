#include<stdio.h>
#define MAX 1000


int stack[MAX];
int topIdx;

void push(int val){
    if(topIdx == MAX-1){
        return;
    }
    //increase topIdx
    topIdx++;

    //insert ke Array
    stack[topIdx] = val;
}

int pop(){
    if(topIdx==-1){
        return -1;
    }

    int val = stack[topIdx];
    stack[topIdx] = 0;
    topIdx--;

    return val;
}

int top(){
    return stack[topIdx];
}

void printStack(){
    for (int i = 0; i <= topIdx; i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(){
    topIdx = -1;
    push(10);
    push(5);
    printStack();
}