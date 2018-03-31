#include <stdio.h>

int main(){
    int n,k,a,b ;
    scanf ("%d %d",&n,&k) ;
    b=240-k ;
    a=(2*5+(n-1)*5)*n/2 ;
    while (a>b){
        a=a-(n)*5 ;
        n-- ;
    }
    printf("%d",n) ;
    return 0 ;
}
