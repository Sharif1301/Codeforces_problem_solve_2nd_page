#include <bits/stdc++.h>

using namespace std ;

int main (){
    unsigned long long n,seat,res=0,d ;
    char c ;
    //int seat,d,res=0 ;
    scanf ("%lld%c",&n,&c) ;
    //printf("%lld",n);
    d=c-96 ;

    if (d==6)d=1 ;
    else if (d==5)d=2 ;
    else if (d==4)d=3 ;
    else if (d==3)d=6 ;
    else if (d==2)d=5 ;
    else if (d==1)d=4 ;

    if (n%4==1){
        //printf("%lld\n",(n%4));
        seat=(n/4)*2+1 ;
        res=(6*seat)-6+d+(n-1) ;
    }
    else if (n%4==2){
        //printf("%lld\n",(n%4));
        seat=(n/4)*2+2 ;
        res=(6*seat)-6+d+(n-1) ;
    }
    else if (n%4==3){
        //printf("%lld\n",(n%4));
        seat=(n/4)*2+1 ;
        res=(6*seat)-6+d+(n-3) ;
    }
    else {
        //printf("%lld\n",(n%4));
        seat=(n/4)*2 ;
        //printf("%lld\n",seat) ;
        res=(6*seat)-6+d+(n-3) ;
    }
    printf("%lld",res) ;
    return 0 ;
}
