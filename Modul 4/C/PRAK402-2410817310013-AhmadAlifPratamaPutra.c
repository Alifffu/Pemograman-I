#include <stdio.h>
int main() {
    int a, i;

    scanf("%d", &a);

    for (i = 1; i <= a; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    for (i = a; i >= 2; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}