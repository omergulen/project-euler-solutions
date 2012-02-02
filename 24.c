#include<stdio.h>

int main(){

    int a,b,c,d,e,f,g,h,k,l,say=0;

    for(a=0;a<=9;a++){
        for(b=0;b<=9;b++){
            if(b==a)
                continue;
            for(c=0;c<=9;c++){
                if(c==a||c==b)
                    continue;
                for(d=0;d<=9;d++){
                    if(d==a||d==b||d==c)
                        continue;
                    for(e=0;e<=9;e++){
                        if(e==a||e==b||e==c||e==d)
                            continue;
                        for(f=0;f<=9;f++){
                            if(f==a||f==b||f==c||f==d||f==e)
                                continue;
                            for(g=0;g<=9;g++){
                                if(g==a||g==b||g==c||g==d||g==e||g==f)
                                    continue;
                                for(h=0;h<=9;h++){
                                    if(h==a||h==b||h==c||h==d||h==e||h==f||h==g)
                                        continue;
                                    for(k=0;k<=9;k++){
                                        if(k==a||k==b||k==c||k==d||k==e||k==f||k==g||k==h)
                                            continue;
                                        for(l=0;l<=9;l++){
                                            if(l==a||l==b||l==c||l==d||l==e||l==f||l==g||l==h||l==k)
                                                continue;
                                            say++;
                                            if(say==1000000)
                                                printf("%d%d%d%d%d%d%d%d%d%d\n",a,b,c,d,e,f,g,h,k,l);

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }





    return 0;
}
