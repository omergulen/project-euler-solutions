#include <stdio.h>

void buyuk(char []);
void yazdir(void);

int main()
{
    int sayici;
    FILE *dosya;
    char dizi[1000];
    char *diziptr;
    diziptr=dizi;

    yazdir();
    dosya=fopen("/home/scylla/Masaüstü/belge.txt","r+");

    for(sayici=0;sayici<1000;sayici++)
        fscanf(dosya,"%c",&dizi[sayici]);
    
    printf("%s",diziptr);
    

    fclose(dosya);        
		printf("\n");

    buyuk(dizi);

    return 0;
}

void buyuk(char dizi[1000])
{
    FILE *dosya;
    int sayici,a,b,c,d,e,enBuyuk=0,toplam=0;

    dosya=fopen("/home/scylla/Masaüstü/belge2.txt","w");

    for(sayici=0;sayici<996;sayici++)
    {
        toplam=0;
        a=dizi[sayici]-48;
        b=dizi[sayici+1]-48;
        c=dizi[sayici+2]-48;
        d=dizi[sayici+3]-48;
        e=dizi[sayici+4]-48;
    fprintf(dosya,"%d%d%d%d%d\n",a,b,c,d,e);
        if(a!=0 && b!=0 && c!= 0 && d!=0 && e!=0)
            toplam=a*10000+b*1000+c*100+d*10+e;
        if(toplam>enBuyuk)
            enBuyuk=toplam;
   }
    for(sayici=0;toplam!=enBuyuk;sayici++){
        toplam=0;
        a=dizi[sayici]-48;
        b=dizi[sayici+1]-48;
        c=dizi[sayici+2]-48;
        d=dizi[sayici+3]-48;
        e=dizi[sayici+4]-48;
    fprintf(dosya,"%d%d%d%d%d\n",a,b,c,d,e);
        if(a!=0 && b!=0 && c!= 0 && d!=0 && e!=0)
            toplam=a*10000+b*1000+c*100+d*10+e;
    }
    printf("\n%d\n",enBuyuk);
    printf("\na * b * c * d * e = %d * %d * %d * %d * %d = %d\n",a,b,c,d,e,a*b*c*d*e);

    fprintf(dosya,"\n");
    fclose(dosya);
}

void yazdir(void)
{
    FILE *dosya;
    dosya=fopen("/home/scylla/Masaüstü/belge.txt","w");
    fprintf(dosya,"7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450");
    fclose(dosya);
}

/*dizi[0]=dizi[0]-48;
printf("\n\n%d",dizi[0]);*/
