#include <stdio.h>

int main (){
    float a, b, i, j, x, y;
    
    printf ("Nilai A =");
    scanf("%f", &a);
    printf ("Nilai B =");
    scanf("%f", &b);
     printf ("Nilai I =");
    scanf("%f", &i);
     printf ("Nilai J =");
    scanf("%f", &j);
     printf ("Nilai X =");
    scanf("%f", &x);
     printf ("Nilai Y =");
    scanf("%f", &y);
        float nilaixx = (a-b)*(i/j)-(x+y);
    printf("Hasil dari A kurang B dikali dengan I di agi J dikurang dengan X ditambah Y adalah %.3f", nilaixx);

}