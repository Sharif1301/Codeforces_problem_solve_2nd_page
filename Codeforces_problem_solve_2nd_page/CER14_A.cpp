#include <bits/stdc++.h>

using namespace std ;

int main (){
    int n,a,c=0 ;
    scanf ("%d",&n) ;
    for(int i=1;i<=n;++i){
        scanf ("%d",&a) ;
        if (a==0){
            c++ ;
        }
    }
    if(n==1&&c==0)printf ("YES\n") ;
    else if(n!=1&&c==1)printf ("YES\n") ;
    else printf("NO\n") ;
    return 0 ;
}
