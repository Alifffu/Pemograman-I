#include <stdio.h>
int main(){
    float a = 4;
    float b = 8;
    float c = 3;

    float jumlah = a*b/c;

    printf("Variabel a bernilai %.f\n", a);
    printf("Variabel b bernilai %.f\n", b);
    printf("Variabel c bernilai %.f\n", c);
    printf("Hasil dari a dikali b dibagi c adalah %.6f", jumlah);
}