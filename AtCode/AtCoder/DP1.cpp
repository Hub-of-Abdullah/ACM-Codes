#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
        cin>>n;
    int dp[n],arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    dp[0] = 0;
    dp[1] = abs(arr[0] - arr[1]);

    for(int i = 2; i < n; i++){
        dp[i] = min(abs(arr[i] - arr[i-2])+dp[i-2],abs(arr[i] - arr[i-1])+dp[i-1]);
        //cout<<dp[i]<<" ";
    }
        cout<<dp[n-1]<<endl;
return 0;
}
