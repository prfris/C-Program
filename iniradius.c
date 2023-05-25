/* File : iniradius.c */
/* Penulis : Prawita, email prfris.career@gmail.com */
/* Program untuk mengisi variabel i yang bertipe float dengan nilai 3.14 dan menuliskannya */

#include<stdio.h>
    /* KAMUS */
int main() {    
    
    /* radius termasuk dalam bilangan desimal yang disebut dengan tipe bilangan riil (float) */
    /* KAMUS */
    float radius = 3.14; /* deklarasi dan inisialisasi nilai variabel radius dengan 3.14 */

    /* ALGORITMA */
    printf("Ini  nilai radius : %.2f", radius); /* untuk mengamati dampak inisialisasi, 5.2f untuk memformat nilai variabel radius menjadi dua angka di belakang koma - %f digunakan untuk menampilkan nilai variabel tipe float */
    return 0;
}