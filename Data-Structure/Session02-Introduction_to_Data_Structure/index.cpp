#include <stdio.h>

struct Node {
    int data;
    Node *next;
} nodeA, nodeB, nodeC, nodeD, nodeE;

int main() {
    // Node nodeA;
    // Node nodeB;
    // Node nodeC;
    // Node nodeD;
    // Node nodeE;

    nodeA.data = 6;
    nodeB.data = 3;
    nodeC.data = 4;
    nodeD.data = 2;
    nodeE.data = 1;

    nodeA.next = &nodeB;
    nodeB.next = &nodeC;
    nodeC.next = &nodeD;
    nodeD.next = &nodeE;

    int sum = nodeA.data;

    Node current = nodeA;

    while (current.next != NULL) {
        current = *current.next;
        sum += current.data;
    }

    printf("Total Sum: %d\n", sum);
    // nodeE.next = &nodeB;

    return 0;
}