#include <stdio.h>

int main(){

    int sayici1,sayici2,sayici3,sayi=0;

    for(sayici1=1;sayi==0;sayici1++){
        for(sayici2=1,sayici3=0;sayici2<=20;sayici2++){
            if(sayici1%sayici2==0)
                sayici3++;

            if(sayici3==20)
                sayi=sayici1;
        }
    }


    printf("%d\n",sayi);


    return 0;
}
