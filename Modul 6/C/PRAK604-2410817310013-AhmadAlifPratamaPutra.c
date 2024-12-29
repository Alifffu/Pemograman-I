#include <stdio.h>
#include <string.h>

void bandingkanArray(char a[], char b[], int n) {
    int hashCount = 0;  
    int starCount = 0;  
    
    for (int i = 0; i < n; i++) {
        if (a[i] == ' ' && b[i] == ' ') {
            printf(" ");
        } else if (a[i] == b[i]) {
            printf("*");
            starCount++;  
        } else {
            printf("#");
            hashCount++;  
        }
    }
    printf("\n");
    printf("* = %d\n", starCount);
    printf("# = %d\n", hashCount);

    if (hashCount > starCount) {
        printf("Pesan Palsu\n");
    } else if (starCount > hashCount) {
        printf("Pesan Asli\n");
    } 
}

int main() {
    char a[100], b[100];
    int n1, n2;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    n1 = strlen(a);
    n2 = strlen(b);

    if (n1 != n2) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        bandingkanArray(a, b, n1);
    }
}