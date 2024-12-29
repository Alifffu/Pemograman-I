#include <stdio.h>
int main() {
    int ang, i;
    char sim;

    scanf("%d %c", &ang, &sim);

    for (i = 1; i <= 100; i++) {
        if (i % ang == 0) {
            printf("%c ", sim);
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}