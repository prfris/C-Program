/* File : keliling.c */
/* Penulis : Prawita, email prfris.career@gmail.com */
/* Program untuk mengisi variabel i yang bertipe float dengan nilai 5.5 dan menuliskannya */

#include<stdio.h>
#define PI 3.14159265359 /* mendefinisikan nilai PI = 3.14 */

    /* KAMUS */

int main() {
    /* dikarenakan nilai keliling yang diinginkan adalah titik desimal, maka harus pakai tipe float */

    /* KAMUS */
    float radius = 5.5, keliling; /* deklarasi dan inisialisasi nilai variabel radus dengan 5.5 */
    keliling = 2 * PI * radius;

    /* ALGORITMA */
    printf("Keliling dari sebuah lingkaran yang jari-jarinya %.2f cm adalah  %.2f cm", radius, keliling); /* untuk mengamati dampak inisialisasi, %1f untuk memformat nilai variabel luas menjadi satu angka di belakang koma */
    return 0;
}