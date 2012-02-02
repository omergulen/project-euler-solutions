#include <stdio.h>

int asal(long long);

int main()
{

    long long int sayi,sayici=0;
    sayi = 600851475143;

    for(sayici=2;sayici<=sayi;sayici++)
    {
        if(sayi % sayici == 0)
        {
            if((asal(sayici))==1)
                printf("%lld\n",sayici);
        }
    }

    return 0;
}

int asal(long long int carpan)
{

    long long int sayici,sonuc=0;
    
    for(sayici=1;sayici<=carpan;sayici++)
    {
        if( carpan % sayici == 0)
            sonuc += sayici;
    }
    if(sonuc == sayici)
        return 1;

    return 0;
}

