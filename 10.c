#include <stdio.h>

int asal(int);
int check_prime(int);

int main()
{
    int sayici=1;
    long long int sayici3=0;

    for(sayici=2;sayici<=2000000;sayici++)
        {

               if(check_prime(sayici))
                sayici3+=sayici;
                printf("%d\n",sayici);

            }


   printf("%lld\n",sayici3);

    return 0;
}
/*
int asal(int carpan)
{   int sayici,sonuc=0;
    for(sayici=1;sayici<=carpan;sayici++)
    {
        if( carpan % sayici == 0)
            sonuc ++;
    }
    if(sonuc == 2)
        return 1;

    return 0;
}
*/

int check_prime(int a)
{
   int c;

   for ( c = 2 ; c <= a - 1 ; c++ )
   {
      if ( a%c == 0 )
     return 0;
   }
   if ( c == a )
      return 1;

   return 0;
}
