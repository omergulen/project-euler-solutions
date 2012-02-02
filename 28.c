#include<stdio.h>

int main()
    {

    int a,b,toplam=1,artan=2,sayi=1;



    for(a=1;a<1001;a++){

        b=0;
        while(b<4){
            sayi+=artan;
            toplam+=sayi;
            b++;
        }
        a++;
        artan+=2;
        }
    printf("%d\n",toplam);


        return 0 ;
    }
