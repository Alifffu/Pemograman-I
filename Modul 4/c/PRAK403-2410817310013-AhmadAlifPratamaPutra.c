#include <stdio.h>
int main() {
    int angka1, angka2, i, j;

    scanf("%d %d", &angka1, &angka2);

    if (angka1 < angka2) {
        for (i = angka1, j = angka2; i <= angka2; i++, j--) {
            printf("%d %d - ", i, j);
        }
    } else {
        for (i = angka1, j = angka2; i >= angka2; i--, j++) {
            printf("%d %d - ", i, j);
        }
    }
    return 0;
}