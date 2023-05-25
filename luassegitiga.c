/* File : luassegitiga.c */
/* Penulis : Prawita, email prfris.career@gmail.com */
/* Program untuk menghitung luas segitiga */

#include<stdio.h>

    /* KAMUS */
void hitungLuasSegitiga(int alas, int tinggi) {
    double luas = (alas *  tinggi) / 2.0;

    /* ALGORITMA */
    printf("Luas segitiga adalah: %.2f \n", luas);
}

int main (void)
{
    /* NILAI MASUKAN */
    hitungLuasSegitiga(5, 7);
    
    return 0;
}