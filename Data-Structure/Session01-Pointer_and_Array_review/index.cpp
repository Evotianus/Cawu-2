#include <stdio.h>

int main() {
    int x;
    int *ptr;
    int **ptr2;

    ptr = &x;
    ptr2 = &ptr;

    x = 10;

    printf("%d", **ptr2);

    return 0;
}