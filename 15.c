#include<stdio.h>

int main(){

    long long int dizi[21][21];
    int sayici,sayici2;

    for(sayici=0;sayici<21;sayici++){
        dizi[0][sayici]=1;
        dizi[sayici][0]=1;
            }

    for(sayici=1;sayici<21;sayici++){
        for(sayici2=1;sayici2<21;sayici2++){
            dizi[sayici][sayici2]= dizi[sayici-1][sayici2] + dizi[sayici][sayici2-1];
            }
    }

    printf("%lld",dizi[20][20]);
    return 0;
}
	
