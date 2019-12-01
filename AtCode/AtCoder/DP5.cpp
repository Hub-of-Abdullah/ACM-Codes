#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

long long dp[101][100001];
int main()
{
    int N;
    long long W;
    cin>>N>>W;
    long long w[101],v[101];
    for(int i=1; i<N+1; i++)
    {
        cin>>w[i]>>v[i];
    }
    for(int i=0; i<N+1; i++)
    {
        for(int value=0; value<100001; value++)
        {
            dp[i][value]=999999999999;
        }
    }
    dp[0][0]=0;
    for(int i=1; i<N+1; i++)
    {
        for(int value=1; value<100; value++)
        {
            if(value>v[i])
            {
                dp[i][value]=min(dp[i-1][value-v[i]]+w[i],dp[i-1][value]);
            }
            else
            {
                dp[i][value]=min(dp[i-1][value],w[i]);
            }
        }
    }
    for(int i = 0; i<100; i++)cout<<i<<" ";
    cout<<endl;
    for(int i=0; i<N+1; i++)
    {
        for(int value=0; value<100; value++)
        {   //if(dp[i][value] == 999999999999)
            //cout<<dp[i][value]%9<<" ";
            //else
            cout<<dp[i][value]<<" ";
        }
        cout<<endl;
    }



    int answer=0;
    for(int value=1; value<100001; value++)
    {
        if(dp[N][value]<=W)
        {
            answer=max(answer,value);
        }
    }
    cout<<answer<<endl;

}
