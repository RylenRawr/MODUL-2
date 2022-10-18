#include <stdio.h>
    int main (){
        float nilaiA, nilaiB;

        printf("Masukkan Nilai Pertama:");
        scanf("%f", &nilaiA);
        printf(" Masukkan Nilai Kedua:");
        scanf("%f", &nilaiB);
            float hasil = nilaiA+nilaiB;
             printf(" Hasil dari penjumlahan nilai %.2f dan nilai kedua %.1f adalah %.2f", nilaiA, nilaiB, hasil);

    }