#include <bits/stdc++.h>

using namespace std ;

int dp[102][2] ;
int coin[102] ;
int n,k,d ;

int ret(int amount, bool flag){
    if (amount>n)return 0 ;
    if (amount==n){
        if (flag==false)return 0 ;
        else return 1 ;
    }

    if (dp[amount][flag]!=-1)return dp[amount][flag] ;
    long long ret1=0 ;
    for (int i=0;i<k;++i){
        if (coin[i]>=d) ret1+=ret(coin[i]+amount,true) ;
        else ret1+=ret (amount+coin[i],flag) ;
    }
    dp[amount][flag]=ret1%1000000007 ;
    return dp[amount][flag] ;
}

int main (){
    cin>>n>>k>>d ;
    for( int j = 0 ; j <  102 ; ++j ) {
            for (int i=0;i<2;++i){
                dp[j][i]=-1 ;
            }
        }
    for (int i=0;i<k;++i){
        coin[i]=i+1 ;
    }
    cout<<ret(0,false)<<endl ;
    return 0 ;
}
