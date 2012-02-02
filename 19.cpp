#include <iostream>

using namespace std;

int main()
{
    int yil,ay,gun,pazar=1,say,sayici2=0;


    for(yil=1900;yil<2001;yil++){
        for(ay=1;ay<=12;ay++){
            if(ay==1 || ay==3 || ay==5 || ay==7 || ay==8 || ay==10 || ay==12)
               say=31;
            else if(ay==2){
                if(yil%4==0){
                    say=29;
                    if(yil%100==0){
                    say=28;
                       if(yil%400==0){
                           say=29;
                        }
                    }
                }
                else
                    say=28;
                     }
            else
                say=30;
            for(gun=1;gun<=say;gun++){
                if(gun==1 && pazar==7){
                    sayici2++;
                    cout << yil<< endl;
                }
                if(pazar==7)
                    pazar=0;
                pazar++;
            }
        }
    }



    cout <<  sayici2 <<" -2 not included(1/1/1900-1/1/1991) = " << sayici2-2 << endl; //son pazarı (31 Aralık 2000 - Pazar)çıkınca 171


    return 0;
}

