#include<stdio.h>

int main()
{
    int sayici3=0,sayici,sayici2;

    for(sayici=1;sayici3<=500;sayici++){
        sayici3=0;
        for(sayici2=1;sayici2<=sayici;sayici2++){
            if(sayici%sayici2==0)
                sayici3++;
        }
     }

    printf("%d\n",sayici-1);


    return 0;
}
