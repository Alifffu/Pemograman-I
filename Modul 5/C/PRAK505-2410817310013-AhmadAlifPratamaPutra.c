#include <stdio.h>

void Biodata(int tahunLahir, char nama[], char asal[]){ 
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahunLahir;
    printf("Perkenalkan Nama Saya: %s\n", nama);
    printf("Umur Saya: %d\n", umur);
    printf("Saya Adalah Angkatan: %d\n", tahun_sekarang);
    printf("Asal Saya dari: %s\n", asal);
    printf(" ");}

int main(){
    int tahunLahir;
    char nama[100], asal[50];
    scanf("%d", &tahunLahir);
    scanf(" %[^\n]%*c", nama);
    scanf(" %[^\n]%*c", asal); 
    printf("\n");
    Biodata(tahunLahir, nama, asal);
}