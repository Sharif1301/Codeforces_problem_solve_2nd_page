#include <bits/stdc++.h>

using namespace std ;
int counter[100001],n ;
long long dp[100001][2] ;
string s[100001][2],r[100002] ;
int main(){
    cin>>n ;
    for (int i=1;i<=n;++i)cin>>counter[i] ;
    for (int i=1;i<=n;++i){
        cin>>s[i][0] ;
        s[i][1]=s[i][0] ;
        reverse(s[i][1].begin(),s[i][1].end()) ;
    }
    for(int i=1;i<=n;i++)
	{
		dp[i][0]=dp[i][1]=10000000000000000;
	}
    dp[1][0]=0 ;
    dp[1][1]=(long long) counter[1] ;
    for (int i=2;i<=n;++i){
        for (int j=0;j<=1;++j){
            for (int k=0;k<=1;++k){
                if (s[i][k]>=s[i-1][j]){
                    dp[i][k]=min(dp[i][k],dp[i-1][j]+k*counter[i]);
                }
            }
        }
    }
    long long ans=min(dp[n][0],dp[n][1]) ;
    if (ans!=10000000000000000)cout<<ans<<endl ;
    else cout<<"-1"<<endl ;

    return 0 ;
}
