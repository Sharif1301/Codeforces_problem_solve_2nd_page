#include <bits/stdc++.h>

using namespace std ;

int main(){
    int a[3],h=0,l=112,m=0 ;
    for (int i=0;i<3;++i){
        scanf("%d",&a[i]) ;
        h=max(h,a[i]) ;
        l=min(l,a[i]) ;
        if (a[i]!=h&&a[i]!=l)m=a[i] ;
    }
    int result=m-l ;
    result+=h-m ;
    printf("%d",result) ;
    return 0 ;
}
