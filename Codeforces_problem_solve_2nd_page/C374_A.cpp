#include <bits/stdc++.h>

using namespace std ;

int main (){
    int n,i,k=0,counter1=0,counter2=0,res[100] ;
    char arr[105];
    scanf ("%d",&n) ;
    scanf ("%s",arr) ;
    bool a=0 ;
    int t ;
    for (i=0;i<n;i++){
        if (arr[i]=='B'){
            a=1 ;
            counter2++ ;
        }
        else {
            counter1+=a ;
            a=0 ;
            if (counter2!=0){
                res[k++]=counter2 ;
                counter2=0 ;
            }
        }
        if (i==(n-1)&&arr[i]=='B'){
            counter1++ ;
            res[k++]=counter2 ;
        }
    }
    printf("%d\n",counter1) ;
    for (i=0;i<counter1;i++){
        printf("%d ",res[i]) ;
    }
    return 0 ;
}
