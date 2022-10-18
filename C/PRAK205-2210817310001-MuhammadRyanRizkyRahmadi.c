#include <stdio.h>
#include <math.h>
    int main(){
        int st, sm;
            printf(" Masukkan sisi tinggi :");
            scanf("%d", &st);
            printf(" Masukkan sisi miring :");
            scanf("%d", &sm);
                int als = sqrt(pow((sm), 2)- pow((st), 2));
                int Kel = st+sm+als;
                int L = st*als/2;
                    printf("Alas = %d Cm \n", als);
                    printf("Tinggi = %d Cm \n", st);
                    printf("Keliling = %d Cm\n", Kel);
                    printf("Luas = %d Cm^2 \n", L);
    }