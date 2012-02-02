#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
    {

    int a,b,toplam=0,genel=0;
    char dizi[10];

    for(a=2;a<500000;a++){
        sprintf(dizi,"%d",a);
        toplam=0;
        for(b=0;b<strlen(dizi);b++){
            toplam+=pow((dizi[b]-48),5);
        }
        if(toplam==a)
            genel+=a;

    }

    printf("%d\n",genel);


    return 0 ;
    }
