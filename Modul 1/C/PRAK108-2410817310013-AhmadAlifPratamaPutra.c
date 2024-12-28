#include <stdio.h>
int main(){
    float c, b, a;
    a = 5;
    b = 14;
    c = ((b/a)/2)*7/22;

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", a);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", b );
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f kilometer", c);
}