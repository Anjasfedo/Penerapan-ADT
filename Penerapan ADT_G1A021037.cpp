#include <stdio.h>
#include <conio.h>

typedef char huruf;
typedef float nilai;


int main() {

 huruf nama[10];
 
 nilai nilai1;
 
 huruf h;



 printf("\nMasukkan Nama Mahasiswa :");

 scanf("%s", nama);

 printf("\nNama Mahasiswa %s", nama);
 
 
 
 printf("\nMasukkan Nilai Mahasiswa :");

 scanf("%f", &nilai1);

 printf("\nNilai Mahasiswa %f", nilai1);


 printf("\nMasukkan Nilai Huruf Mahasiswa (A-E) :");

 h=getche();

 printf("\nNilai Huruf Mahasiswa %c", h);


 getch();

}

