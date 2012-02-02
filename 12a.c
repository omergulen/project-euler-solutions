#include <stdio.h>
#include <math.h>


int main(){

    int i,k;
for( i = 1; 1; ++i )
{

    int carpan = i * ( i + 1 ) / 2; //   n(n+1)/2

    int sayici = 0;

    for( k = 1; k <= sqrt( carpan ); ++k )
            {
        if( carpan % k == 0 ) ++sayici;
            }//for

    sayici *= 2;


    if( sayici > 2 )
    {
        printf("%d %d %d\n",carpan,sayici,i);

        break;
    }
}
return 0;
}
