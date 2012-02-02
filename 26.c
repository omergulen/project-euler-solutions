#include<stdio.h>

int main(){

    int a,b,c,d,enbuyuk=0,sayi,giris=0;
    int dizi[1000];

    for(a=1;a<1000;a++){
        b=1;
        dizi[0]=10/a;

        for(c=1;c<1000;c++)
        {
            b=b*10-dizi[c-1]*a;
            dizi[c]=b*10/a;
        }
        giris=0;
        for(c=0;c<995;c++){
            if(dizi[c]==0 && dizi[c+1]==0 && dizi[c+2]==0){
                giris=1;
        }
        }

        for(c=0;c<995 && giris==0;c++){
            for(d=c+1;d<995 && giris==0 ;d++){
                if(dizi[c]==dizi[d] && dizi[c+1]==dizi[d+1] && dizi[c+2]==dizi[d+2]){
                    if((d-c)>enbuyuk){
                        enbuyuk=d-c;
                        sayi=a;
                    }
                    giris=1;
                }
            }
        }

       }

    printf("%d\n",sayi);


    return 0;
}
