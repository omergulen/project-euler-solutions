#include<stdio.h>

int buyuk(int,int);

int main(){

    int dizi[17][17],i,j;

    for(i=0;i<17;i++){
        dizi[i][0]=0;
        dizi[0][i]=0;
    }



    FILE *dosya;
    dosya=fopen("/home/scylla/Masaüstü/belge.txt","w");
    fprintf(dosya,"75 95 64 17 47 82 18 35 87 10 20 04 82 47 65 19 01 23 75 03 34 88 02 77 73 07 63 67 99 65 04 28 06 16 70 92 41 41 26 56 83 40 80 70 33 41 48 72 33 47 32 37 16 94 29 53 71 44 65 25 43 91 52 97 51 14 70 11 33 28 77 73 17 78 39 68 17 57 91 71 52 38 17 14 91 43 58 50 27 29 48 63 66 04 68 89 53 67 30 73 16 69 87 40 31 04 62 98 27 23 09 70 98 73 93 38 53 60 04 23");
    fclose(dosya);


    dosya=fopen("/home/scylla/Masaüstü/belge.txt","r");
    for(i=0;(feof(dosya))==0;i++){
        for(j=0;j<=i;j++)
            fscanf(dosya,"%d",&dizi[i][j]);
            }


    fclose(dosya);
    for(i = 13; i >= 0; i--)
         {
        for(j = 0; j <= i ; j++ )
             dizi[i][j] = dizi[i][j] + buyuk(dizi[i+1][j],dizi[i+1][j+1]);
         }

    printf("%d\n",dizi[0][0]);


    return 0;
}


int buyuk(int a,int b){

    if(a>b)
        return a;
    else
        return b;
}
