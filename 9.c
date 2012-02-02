#include <stdio.h>
#include <math.h>


int main()
{
    int toplam=1000;
    int sayici1,sayici2,sayici3;

    for(sayici1=1;sayici1<=toplam;sayici1++){
        for(sayici2=sayici1+1;sayici2<=toplam;sayici2++){
            sayici3=1000-sayici1-sayici2;
            if((sayici1*sayici1)+(sayici2*sayici2)==(sayici3*sayici3)){
                printf("a=%d b=%d c=%d\n",sayici1,sayici2,sayici3);
                printf("a*a + b*b = c*c : %d + %d = %d\n",sayici1*sayici1,sayici2*sayici2,sayici3*sayici3);
                printf("a x b x c = %d\n",sayici1*sayici2*sayici3); // answer
        }
	}
    }
    return 0;
}
