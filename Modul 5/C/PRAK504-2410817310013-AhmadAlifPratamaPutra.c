#include <stdio.h>
int reverse(int num){
    int balik = 0;
    while (num > 0){
        balik = balik * 10 + num % 10;
        num /= 10;}
    return balik;}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));
    return 0;
    }