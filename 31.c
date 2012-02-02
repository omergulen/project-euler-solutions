#include<stdio.h>

int main()
    {

    int a,b,c,d,e,f,g,toplam=200,sayici=0;

    for(a=toplam;a>=0;a-=200){
        for(b=a;b>=0;b-=100){
            for(c=b;c>=0;c-=50){
                for(d=c;d>=0;d-=20){
                    for(e=d;e>=0;e-=10){
                        for(f=e;f>=0;f-=5){
                            for(g=f;g>=0;g-=2){
                                    sayici++;
                        }
                    }
                }
            }
        }
    }

    }


    printf("%d\n",sayici);

    return 0 ;
    }

