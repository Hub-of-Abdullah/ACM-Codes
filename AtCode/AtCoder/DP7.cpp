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
#define ll long long
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
const int xx  =  1e5+5;

int dp[xx];
int visited[xx];
int in_degree[xx];
vi edges[xx];

void dfs(int s){
        visited[s] = true;
        for(int i : edges[s]){
            in_degree[i]--;
            dp[i] = max(dp[i],dp[s]+1);

        if(in_degree[i]==0)
            dfs(i);
    }
}
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);

    int n,m;
    cin>>n>>m;
    f0(i,m){
        int x,y;
        cin>>x>>y;
        edges[x].pb(y);
        in_degree[y]++;
    }

    f1(i,n){
       if(in_degree[i]==0 && !visited[i])
            dfs(i);
    }
    int ans = 0;
    f1(i,n){
        ans = max(ans,dp[i]);
    }
    cout<<ans<<endl;
return 0;
}
