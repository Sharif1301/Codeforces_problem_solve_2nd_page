#include <bits/stdc++.h>

using namespace std ;

int main (){
    char a[105] ;
    int b,c=1,d,i,result=0 ;
    scanf ("%s",a) ;
    int l=strlen(a) ;
    for (int j=0;j<l;++j){
        b=a[j]-96 ;
        d=abs(c-b) ;
        result+=min(d,(26-d)) ;
        c=b ;
    }

    printf ("%d",result) ;
    return 0 ;
}
