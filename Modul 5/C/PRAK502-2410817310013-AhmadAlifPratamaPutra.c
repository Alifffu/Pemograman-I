#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2){
    return nilai1 - nilai2;
    }
int mutlak(int angka){
    if (angka < 0){
        return -angka;
        }
    return angka;
    }

int main(){
   int a, b, c, d;
   scanf("%d %d %d %d", &a, &c, &b, &d);
   int hasil = mutlak(hitung(a, b)) + mutlak(hitung(c, d));
   printf("%d", mutlak(hasil));
   return 0;
   }