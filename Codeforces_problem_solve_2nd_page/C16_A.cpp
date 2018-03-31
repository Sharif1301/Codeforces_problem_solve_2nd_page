#include <bits/stdc++.h>

using namespace std ;

int main (){
    int b,result = 8,c=0 ;
    char a ;
    scanf ("%c%d",&a,&b) ;
    if (a=='a'||a=='h'){
        c=1 ;
        result = result-2 ;
    }
    if (b==1||b==8){
        c=1 ;
        result = result-2 ;
    }
    if (c==1)result = result-1 ;
    printf ("%d\n",result) ;
    return 0 ;
}
