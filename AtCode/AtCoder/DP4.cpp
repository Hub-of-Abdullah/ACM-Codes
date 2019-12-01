///"Bismillahir Rahmanir Raheem"///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef vector<pii> vii;
typedef vector<pil> vil;
typedef vector<pli> vli;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz size()
#define all(a)  a.begin(), a.end()
#define mem(a, b)     memset(a, b, sizeof(a))
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};

const double PI = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;
const int maxn = (int)2e5+5;
const int LOGN = 20;
const int N = 110;
const int W = 100010;
long long int dp[N][W];
int main(){
    int n,w;
    cin>>n>>w;
   // vector<int> dp(n+1,0);
    vector<int> pf(N);
    vector<int> wt(N);

    f1(i,n){
        cin>>wt[i]>>pf[i];
        }

    f1(i,n){
        f1(j,w){
            if(j-wt[i]>=0)
            dp[i][j] = max(dp[i-1][j],(dp[i-1][j-wt[i]]+pf[i]));
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][w]<<endl;
    /*for(int i = 0; i<=n; i++){
        for(int j =0;j<=bw;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
return 0;
}

