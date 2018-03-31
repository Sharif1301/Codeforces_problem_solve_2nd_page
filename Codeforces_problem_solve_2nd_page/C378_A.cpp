#include <bits/stdc++.h>

using namespace std ;

int main (){
    int n=1,c1=0,c2=0 ;
    char a[105] ;
    cin>>a ;
    int l=strlen(a) ;
    for (int i=0;i<l;++i){
        if (a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'){
            c1++ ;
            c2=max(c1,c2) ;
            c1=0 ;
            //cout<<"c2="<<c2<<" " ;

        }
        else c1++ ;
}
    c1++ ;
    c2=max(c1,c2) ;
    cout<<c2 ;
    return 0 ;
}
