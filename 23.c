#include<stdio.h>

#define MAX 28123

void abundant(int []);

int main(){

    int a,dizi[6965],b,c,d,toplam=0;


    abundant(dizi);

    for(a=0;a<MAX;a++){
        d=0;
        for(b=0;(dizi[b]<a) || (dizi[b]+dizi[c]==a);b++){
            for(c=0;(dizi[c]<a) || (dizi[b]+dizi[c]==a);c++){
                if(dizi[b]+dizi[c]==a){
                    d++;
                    break;
                }
            }

        }
        if(d==0)
            toplam+=a;

    }



    printf("%d\n",toplam);


    return 0;
}

void abundant(int dizi2[6965]){

    int sayici,sayici2,sayici3=0,toplam2=0;

    for(sayici=1;sayici<MAX;sayici++){
        toplam2=0;
        for(sayici2=1;sayici2<sayici;sayici2++){
             if(sayici%sayici2==0)
                toplam2+=sayici2;
        }
        if(toplam2>sayici){
            dizi2[sayici3]=sayici;
            sayici3++;
            }
    }



}
