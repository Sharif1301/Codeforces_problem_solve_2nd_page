#include <iostream>
#include <cstdio>

using namespace std ;

int main (){
    long long int n,m,kmax,kmin,a,b,c,d ;
    scanf ("%I64d %I64d",&n,&m) ;
    d=n/m ;
    a=d*m ;
    c=n-a ;
    if (a==n){
        kmin=((d-1)*d)/2 ;
        kmin=kmin*m ;
    }
    else {

        kmin=((d-1)*d)/2 ;
        kmin=kmin*(m-c) ;
        b=((d+1)*d)/2 ;
        kmin=kmin+(b*c) ;
    }
    kmax=((n-m)*(n-m+1))/2 ;
    printf ("%I64d %I64d",kmin,kmax) ;
    return 0 ;
}
