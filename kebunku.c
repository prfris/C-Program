/* File : kebunku.c */
/* Penulis : Prawita, email prfris.career@gmail.com */
/* Program untuk mengisi variabel i yang bertipe float dengan nilai 2.5 dan menuliskannya */

#include<stdio.h>
    /* KAMUS */

int main() {
    /* dikarenakan nilai luas yang diinginkan adalah titik desimal, maka harus pakai tipe float */

    /* KAMUS */
    float luas = 2.5; /* deklarasi dan inisialisasi nilai variabel luass dengan 2.5 */

    /* ALGORITMA */
    printf("Luas kebunku :  %1.f hektar", luas); /* untuk mengamati dampak inisialisasi, %1f untuk memformat nilai variabel luas menjadi satu angka di belakang koma */
    return 0;
}