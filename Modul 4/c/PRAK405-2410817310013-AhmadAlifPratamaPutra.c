#include <stdio.h>
int main() {
    int n, kelipatan, i, j, total = 0, baris;

    scanf("%d %d", &n, &kelipatan);

    for (i = 1; i <= n; i++) {
        baris = 0;
        printf("(");
        for (j = 1; j <= i; j++) {
            baris += j * kelipatan;
            printf("%d * %d", j, kelipatan);
            if (j < i) {
                printf(" + ");
            }
        }
        total += baris;
        printf(") = %d\n", baris);
    }
    printf("%d\n", total);

    return 0;
}