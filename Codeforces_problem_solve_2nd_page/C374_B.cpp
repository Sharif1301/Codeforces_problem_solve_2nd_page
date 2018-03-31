#include <bits/stdc++.h>

using namespace std ;

int arr[110] ;

int main (){
    int n,k,i,a,b,d=0 ;
    string c ;
    scanf ("%d %d",&n,&k) ;
    for (i=1;i<=n+1;++i){
        cin>>c ;
        if (i==(n+1))a=c.size() ;
        else{
            b=c.size() ;
            arr[b]++ ;
        }
    }
   for (i=1;i<a;++i){
        d=d+arr[i] ;
   }
   int lower=(d+1)+((d/k)*5) ;
   int upper=(d+arr[a])+(((d+arr[a]-1)/k)*5) ;
   printf("%d %d",lower,upper) ;
   return 0 ;
}
