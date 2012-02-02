#include <stdio.h>

int main(){

    int sayici,sayici3,enbuyuk=0;
    long long int sayici2;

    for(sayici=1;sayici<1000000;sayici++){
        sayici2=sayici;
        sayici3=1;
        while(sayici2!=1){
            if(sayici2%2==0)
                sayici2=sayici2/2;
            else
                sayici2=(sayici2*3)+1;

            sayici3++;
        }//while
        if(sayici3>enbuyuk){
            enbuyuk=sayici3;
            printf("%d %d\n",sayici,sayici3);
            }
    }//for
    return 0;
    }//main
