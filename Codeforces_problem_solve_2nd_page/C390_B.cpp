#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std ;

int main (){
    int i,j,arr[5][5],ans=0 ;
    char x ;
    memset(arr,'-10',sizeof(arr)) ;

    for (i=1;i<=4;i++){
        for (j=1;j<=4;j++){
            scanf ("%c",&x) ;
            if (x=='x')arr[i][j]=1 ;
            else if (x=='.')arr[i][j]=-2 ;
            else if (x=='o')arr[i][j]=-5 ;

        }
    getchar() ;

   }
    for (i=1;i<=2;i++){
        for (j=1;j<=2;j++){
            if (arr[i][j]+arr[i][j+1]+arr[i][j+2]==0)ans=1 ;
            else if (arr[i][j]+arr[i+1][j]+arr[i+2][j]==0)ans=1 ;
            else if (arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2]==0)ans=1 ;
        }
    }
    for (i=1;i<=2;i++){
        for (j=4;j>=3;j--){
            if (arr[i][j]+arr[i][j-1]+arr[i][j-2]==0)ans=1;
            else if (arr[i][j]+arr[i+1][j]+arr[i+2][j]==0)ans=1;
            else if (arr[i][j]+arr[i+1][j-1]+arr[i+2][j-2]==0)ans=1;
        }
    }
    if (arr[3][1]+arr[3][2]+arr[3][3]==0)ans=1;
    else if (arr[3][2]+arr[3][3]+arr[3][4]==0)ans=1;
    else if (arr[4][1]+arr[4][2]+arr[4][3]==0)ans=1 ;
    else if (arr[4][2]+arr[4][3]+arr[4][4]==0)ans=1;


    if (ans==1)printf("YES\n") ;
    else printf("NO\n") ;
    return 0 ;
}
