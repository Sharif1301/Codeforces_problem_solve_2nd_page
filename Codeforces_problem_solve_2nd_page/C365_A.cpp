#include <bits/stdc++.h>

using namespace std ;

int main (){
    int n,i,m,c,counter1=0,counter2=0 ;
    scanf("%d",&n) ;
    while(n--) {
        scanf("%d %d",&m,&c) ;
        if (m<c){
            counter2++ ;
        }
        else if (m>c){
            counter1++ ;
        }
    }
    if (counter1>counter2){
        printf("Mishka\n") ;
    }
    else if (counter2>counter1){
        printf("Chris\n") ;
    }
    else{
        printf("Friendship is magic!^^\n") ;
    }
    return 0 ;
}
