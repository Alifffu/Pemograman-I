#include <stdio.h>
int main(){
    int a = 400000;
    int b = 350000;
    int x = a/100*87;  
    int y = b/100*79;   

    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu A adalah %d\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", x);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", y);
}