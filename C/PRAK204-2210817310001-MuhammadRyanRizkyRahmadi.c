#include <stdio.h>
#include <math.h>

int main(){
float r, t;

printf(" Masukkan Jari Jari :") ;  
    scanf("%f", &r);
    printf(" Masukkan Tinggi :");
    scanf("%f", &t);
        float v =  22*r*r/7;
        float L =  2*22*r*(r+t)/7;
        float Kel =  2*22*r/7;
            printf("Volume = %.2f\n", v );
            printf ("Luas  =%.2f\n", L);
            printf("Keliling =%.2f\n", Kel);

}