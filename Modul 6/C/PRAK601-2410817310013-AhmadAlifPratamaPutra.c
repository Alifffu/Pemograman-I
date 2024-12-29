#include <stdio.h>
int main() {
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);
    int elemen[baris * kolom];
    for (int i = 0; i < baris * kolom; i++) {
        scanf("%d", &elemen[i]);
    }
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", elemen[i * kolom + j]);
        }
        printf("\n");
    }
    return 0;
}