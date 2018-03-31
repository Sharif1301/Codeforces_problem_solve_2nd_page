#include <iostream>
#include <cstdio>

using namespace std ;
long long int arr[100005] ;
int main(){
    int n,i,a ;
    cin >> n ;

    for (i=0;i<n;++i){
        cin >> a ;
        arr[a]+=a ;
    }
    for (i=2;i<=100000;++i){
        arr[i]=max(arr[i-1],arr[i]+arr[i-2]) ;
    }
    cout<<arr[100000] ;
    return 0 ;
}
