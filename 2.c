#include <stdio.h>

int main()
{
	int once=1,simdi=2,gelecek=0,toplam=2;
	
	
	do{
		//printf("%d\t%d\t%d\t%d\n",once,simdi,gelecek,toplam);
		gelecek=simdi+once;
		
		if(gelecek%2==0)
			toplam+=gelecek;
			
		once = simdi;
		simdi=gelecek;
			
		}while(gelecek<4000000);
		
	
	//toplam-=simdi;
	
	printf("%d",toplam);

	
	return 0;
}

