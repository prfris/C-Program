/* File : assignChar.c */
/* Penulis : Prawita, email prfris.career@gmail.com */
/* Deskripsi */
/* Program ini berisi contoh sederhana untuk mendefinisikan variabel bertipe char (karakter) */

#include<stdio.h>

int main() {

    /* KAMUS */
    char c = 65; /* inisialisasi nilai char dengan 65, kode huruf 'A' */
    char c1;

    /* ALGORITMA */
    /* penulisan karakter sebagai huruf */
    printf ("Karakter = %c\n", c);
    c1 = 'Z'; /* variabel c1 diisi dengan huruf 'Z' */
    printf ("Karakter = %c\n", c1);

    /* penulisan karakter */
    printf("Karakter dalam kode ASCII = %d\n", c);
    printf("Karakter sebagai huruf = %c\n", c);
    printf("Karakter dalam kode ASCII = %d\n", c1);
    printf("Karakter sebagai huruf = %c\n", c1);


    return 0;
}