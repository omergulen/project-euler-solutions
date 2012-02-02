#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double dizi[9801]={0};
    double a,b;
    int c=0,d,say=0;



    for(a=2.0;a<=100.0;a+=1.0){
        for(b=2.0;b<=100.0;b+=1.0,c++){
        cout << pow(a,b) << endl;
        dizi[c]=pow(a,b);
        }
    }

    for(c=0;c<9801;c++){
        if(dizi[c]==0) continue;

        for(d=c+1;d<9801;d++){
            if(dizi[d]==0) continue;

        if(dizi[c]==dizi[d])
            dizi[d]=0;
            }
       }

    for(c=0;c<9801;c++){
        if(dizi[c]==0) continue;
        say++;
    }

    cout << say << endl;

    return 0;
}

