#include<stdio.h>
#include<math.h>
#include<string.h>

int faktoriyel (int);

int main()
    {

    int a,b,toplam=0,genel=0;
    char dizi[10];

    for(a=3 ;a<1000000;a++){
        sprintf(dizi,"%d",a);
        toplam=0;
        for(b=0;b<strlen(dizi);b++){
            toplam+=faktoriyel(dizi[b]-48);
        }

        if(toplam==a)
            genel+=a;

    }

    printf("%d\n",genel);


    return 0 ;
    }

int faktoriyel(int a){

    int b=1;

    if(a==0)
        return 1;

    else
        for(b=a-1;b>0;b--)
            a*=b;



      return a;
}
