#include <stdio.h>

int kacbas (int);
int degistir (int,int);

int main(){
       int sayici1,sayici2,secim,bas,dogruluk,enbuyuk=0;
       for(sayici1=100;sayici1<=999;sayici1++){
           for(sayici2=100;sayici2<=999;sayici2++){

           secim = sayici1 * sayici2;

       bas = kacbas (secim);

       if (bas == 1)
       printf("%d",secim);

       else{
       dogruluk = degistir (bas,secim);
       if(dogruluk == secim){
           printf("%d x %d = ",sayici1,sayici2);
           printf("%d\n",dogruluk);
           if(dogruluk > enbuyuk)
               enbuyuk = dogruluk;
           }
       }//else
/*
       if(dogruluk == secim)
       printf("\nSayi palendromik bir sayidir.");
       else
       printf("\nSayi palendromik bir sayi degildir.");
       */

           }
       }

       printf("\n\n%d\n",enbuyuk);

       return 0;

       }//main

int kacbas (int sayi){
    int f,bas,top;

    for(f=10,bas=0;sayi!=top;bas++,f*=10){
          top = sayi % f;

          }//for
    return bas;

    }//kacbas

int degistir (int bas,int secim){
    int f,o=1,r,son=0;
    for(f=1;f<bas;f++)
    o*=10;
    for(f=1,r=10;f<=bas/2;f++,r*=10,o/=100)
       son += (secim % r - secim % (r/10)) *o;
    if(bas % 2 == 0){
         o=10;
         }//if
    else{
         r*=10;
         for(f=1,o=1;f<=bas/2+1;f++)
         o*=10;
         son += secim % o - secim % (o/10);
         o=100;
         }//else
    for(f=1;f<=bas/2;f++,r*=10,o*=100)
       son += (secim % r - secim % (r/10))/o;

    return son;
       }//degistir


