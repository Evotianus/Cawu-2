#include <stdio.h>

int main() {
    int a[5] = {0, 1, 2, 3, 4};
    int b[3][3] = {{0,1,2}, {3,4,5}, {6,7,8}};

    printf("%d\n", a);
    // printf("%d\n", 6422284);
    printf("%d\n", b[0]);


    // Insertion
    char x[10000];

    printf("%d", sizeof(x) / sizeof(char));

    for (int i = 0; i < sizeof(x) / sizeof(int); i++) {
        scanf("%d", &x[i]);
    }

    return 0;
}