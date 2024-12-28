#include <stdio.h>
int main(){
    int a,  b, c, keliling, harga, biaya;
    a = 4;
    b = 5;
    c = 7;
    keliling = a + b + c;
    harga = 85000;
    biaya = harga * keliling;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah per meter adalah %d\n", harga);
    printf("jawaban :\n");
    printf("Biaya yang diperlukan pak dengklek adalah : %d", biaya);
}