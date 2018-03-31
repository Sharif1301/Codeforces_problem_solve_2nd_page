#include <bits/stdc++.h>

using namespace std ;

int main(){
    long int t,x,s ;
    int i=1 ;
    scanf ("%ld %ld %ld",&t,&x,&s) ;
    bool a=1,j=0 ;
    while (a==1){
        if (s==t){
            printf ("YES\n") ;
            a=0 ;
            j=1 ;
        }
        else if (s==t+(i*x)){
            printf ("YES\n") ;
            a=0 ;
            j=1 ;
        }
        else if (s==t+(i*x)+1){
            printf("YES\n") ;
            a=0 ;
            j=1 ;
        }

        if((s<=t+(i*x))||(s<=t+(i*x)+1)){
            a=0 ;
        }
        i++ ;
    }
    if (j==0)printf ("NO\n") ;
    return 0 ;
}
