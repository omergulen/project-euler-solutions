#include <stdio.h>

int main()
{
    int once[1000],simdi[1000],sonra[1000],a,b,sayici=2,c;

    for(a=0;a<1000;a++)
    {
        once[a]=0;
        simdi[a]=0;
        sonra[a]=0;
    }
    once[999]=1;
    simdi[999]=1;

    while(simdi[0]==0){
        for(a=999;a>=0;a--){
            sonra[a]=simdi[a]+once[a];
            once[a]=simdi[a];
            simdi[a]=sonra[a];
        }
        for(b=998;b>=0;b--){
            once[b]+=once[b+1]/10;
            once[b+1]%=10;

            simdi[b]+=simdi[b+1]/10;
            simdi[b+1]%=10;

            sonra[b]+=sonra[b+1]/10;
            sonra[b+1]%=10;
        }
        sayici++;
        printf("%d : \n",sayici);
        for(c=0;c<1000;c++)
            printf("%d",simdi[c]);
        printf("\n");
    }
    return 0;
}
