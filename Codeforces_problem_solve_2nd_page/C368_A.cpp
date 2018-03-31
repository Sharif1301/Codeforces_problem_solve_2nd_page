#include <bits/stdc++.h>

using namespace std ;

int main(){
    int n,m,i,j ;
    bool ans=0 ;
    scanf ("%d %d",&n,&m) ;
    char a,b ;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            scanf ("%c %c",&a,&b) ;
            if (a=='C'||a=='M'||a=='Y'||b=='C'||b=='M'||b=='Y'){
                ans = 1 ;
            }
        }
    }
    if (ans==1)printf("#Color\n") ;
    else printf("#Black&White\n") ;
    return 0 ;
}

