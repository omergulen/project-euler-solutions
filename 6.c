#include <stdio.h>

int kare(int);

int main(){

    int toplam1=0,toplam2=0,sayici,kare2=0;

    for(sayici=1;sayici<=100;sayici++)
    {
        toplam1+=sayici;
        kare2=kare(sayici);
        toplam2+=kare2;
        printf("Sayici : %d Kare : %d Toplam1: %d Toplam2: %d\n",sayici,kare2,toplam1,toplam2);

    }
    toplam1=kare(toplam1);

    printf("\n\n%d - %d = %d\n",toplam1,toplam2,toplam1-toplam2);


    return 0;
}

int kare(int sayi)
{
    return sayi * sayi ;
}
