#include <bits/stdc++.h>

using namespace std ;

int main (){
    int n,i,sum=0 ;
    scanf ("%d",&n) ;
    int a[n] ;
    for (i=0;i<n;++i){
        scanf ("%d",&a[i]) ;
        sum=sum+a[i] ;
    }
    sum=sum/(n/2) ;
    int b[n],k=0 ;
    for (i=0;i<n;++i){
        for (int j=i;j<n;++j){
            if ((i!=j)&&(a[i]+a[j]==sum)){
                b[k++]=i+1 ;
                b[k++]=j+1 ;
                a[i]=0 ;
                a[j]=0 ;
            }
        }
    }
    k=0 ;
    for (i=0;i<n;++i){
        k++ ;
        printf ("%d ",b[i]);
        if (k%2==0){
            printf("\n") ;
        }
    }
    return 0 ;
}
