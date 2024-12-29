#include <stdio.h>
int main (){
    int nilai;
    scanf("%d", &nilai);
    if(nilai>0){printf("positif");}
    else if(nilai==0){printf("nol");}
    else{printf("negatif");}
    return 0;
}