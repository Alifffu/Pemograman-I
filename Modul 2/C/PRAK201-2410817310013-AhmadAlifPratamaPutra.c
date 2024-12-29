#include <stdio.h>
int main() {
    char name1[50], name2[50], name3[50], name4[50];
    int nim;
    int pclass;
    char place[15];
    int date, month, year;
    char address[100];
    char hobby[50];
    int phone[50];

    printf("Nama : ");
    scanf("%s" "%s" "%s" "%s", &name1, &name2, &name3, &name4);
   
    printf("NIM : ");
    scanf("%d", &nim);

    printf("Kelas Paralel : ");
    scanf("%d", &pclass);

    printf("Tempat/Tanggal Lahir : ");
    scanf("%s" "%d" "%d" "%d", &place, &date, &month, &year);

    getchar();
    printf("Alamat : ");
    scanf(" %[^\n]", &address);

    printf("Hobi : ");
    scanf("%s", &hobby);

    printf("No. HP : ");
    scanf("%s", &phone);

    printf("Nama : %s %s %s %s\n", name1, name2, name3, name4);
    printf("NIM : %d\n", nim);
    printf("Kelas Paralel : %d\n", pclass);
    printf("Tempat/Tanggal lahir : %s %d %d %d\n", place, date, month, year);
    printf("Alamat : %s\n", address);
    printf("Hobi : %s\n", hobby);
    printf("No. HP : %s", phone);
}