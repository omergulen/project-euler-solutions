#include <stdio.h>

int asal(int);

int main()
{
    int sayici=1,sayici3=0;

    for(sayici=2;sayici3!=10001;sayici++)
    {
               if((asal(sayici))==1){
                sayici3++;
                     }
    }
    sayici=sayici-1;

    if(sayici3==10001)
        printf("%d\n%d\n",sayici,sayici3);
    return 0;
}

int asal(int carpan)
{   int sayici,sonuc=0;
    for(sayici=1;sayici<=carpan;sayici++)
    {
        if( carpan % sayici == 0)
            sonuc += sayici;
    }
    if(sonuc == sayici)
        return 1;
    return 0; }
