#include <stdio.h>
#include <math.h>
int main (){
    int alas = 5;
    int tinggi = 12;
    int keliling = 30;
    int luas = 30;
    int miring = sqrt(alas*alas + tinggi*tinggi);

    printf("Diketahui :\n"); 
    printf("Alas = %d cm\n", alas); 
    printf("Tinggi = %d cm\n", tinggi); 
    printf("Jawab :\n"); 
    printf("Sisi A = %d cm\n", tinggi); 
    printf("Sisi B = %d cm\n", miring); 
    printf("Sisi C = %d cm\n", alas); 
    printf("Keliling = %d cm\n", keliling); 
    printf("Luas = %d cm\n", luas);
}