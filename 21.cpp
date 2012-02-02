/*#include <stdio.h>
  
int main(){
int i,j,z,sumA,sumB,sumPairs;

sumPairs = 0;

for (i=1;i<10000;i++){
  sumA = 0;
  for (j=1;j<i;j++){
    if (i%j==0)    
      sumA += j;
  }

  sumB = 0;
  for (z=1;z<sumA;z++){
    if (sumA%z==0)
      sumB += z;
  }

  if (sumB == i && sumB != sumA)
    sumPairs += i;  
}

printf("%d\n",sumPairs);

return 0;
}
*/


#include<iostream>

using namespace std;

int carpan(int);

int main(){

    int sayici,toplam=0,a=0;

    for(sayici=1;sayici<10000;sayici++){
        a=carpan(sayici);
        if(sayici==carpan(a) && sayici!=carpan(sayici))
            toplam+=sayici;
        }



    cout << toplam << endl;

    return 0;
}

int carpan(int b){

    int i,toplam2=0;

    for(i=1;i<b;i++){
        if(b%i==0)
            toplam2+=i;
        }

    return toplam2;
}
