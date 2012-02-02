#include <stdio.h>

int main()
{
	int toplam=0,sayici,degisken;
	
	for(sayici=0;sayici<1000;sayici++){
		
		degisken=0;
		
		while((sayici%3)==0 && (sayici%5)==0 && degisken==0){
			toplam+=sayici;
			printf("%d (Hem 3 ile hemde 5 ile bolunur)\n",sayici);
			degisken=1;
			}
		
		while((sayici%3)==0 && degisken==0){
			toplam+=sayici;
			printf("%d (3 ile bolunur)\n",sayici);
			degisken=1;
			}
		
		while((sayici%5)==0 && degisken==0){
			toplam+=sayici;
			printf("%d (5 ile bolunur)\n",sayici);
			degisken=1;
			}
		
	}
		printf("Toplam : %d",toplam);
	
	return 0;
}

