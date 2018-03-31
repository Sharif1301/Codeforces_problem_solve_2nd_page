#include <stdio.h>

int main(){
    int n,i,result ;
    scanf ("%d",&n) ;
    result=n/2 ;
    printf("%d\n",result) ;
    //printf("%d\n",n&&1) ;
    if (n%2==0){
        for (i=1;i<=result;i++){
            printf("2 ") ;
        }
    }
    else {
    result-=1 ;
        for (i=1;i<=result;i++){
            printf("2 ") ;
        }
        printf("3") ;
    }
    return 0 ;
}
