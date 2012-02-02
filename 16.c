#include<stdio.h>
#include<math.h>

int main(){



    int toplam=0,sayici;
    double sayi=pow(2,1000);//sayici2,tek=0;
    char dizi[350];

    printf("%.0f\n\n\n\n",sayi);

    for(sayici=0;sayici<350;sayici++)
        dizi[sayici]=0;

       /* for(sayici=10,sayici2=1;sayici<sayi;sayici*=10,sayici2*=10){
            tek=fmod(sayi,sayici)-fmod(sayi,(sayici/10));
            tek/=sayici2;
            toplam+=tek;
            printf("%d\n",toplam); //Çalışmadııııı bir yerden sonra negatif degerler gelmeye basladi...!!!
           }*/

    FILE *dosya;
    dosya=fopen("/home/scylla/Masaüstü/2pow1000.txt","w");
    fprintf(dosya,"%.0f",sayi);
    fclose(dosya);

    dosya=fopen("/home/scylla/Masaüstü/2pow1000.txt","r");
    for(sayici=0;sayici<=302;sayici++){
        fscanf(dosya,"%c",&dizi[sayici]);
    }

    fclose(dosya);

    for(sayici=0;sayici<310;sayici++)
        if((dizi[sayici]-48)>=0)
            toplam+=dizi[sayici]-48;


        printf("%d\n\n\n",toplam);

    return 0;
}
