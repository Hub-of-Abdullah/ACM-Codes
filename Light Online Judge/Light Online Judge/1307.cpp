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
int main(){

    int t,n,x;cin>>t;
    f1(cas,t){
        vi val;
        cin>>n;

        for(int i=1;i<=n;i++){
            cin>>x;
            val.push_back(x);
        }
        int cnt = 0;
        sort(val.begin(),val.end());

        for(int i = n-1;i>0;i--){
            int l=0,r=i-1;

            while(l<r){

             if(val[l]+val[r]>val[i]){
                    cnt+=r-l;
                    r--;
                }
            else{
                    l++;
                }
            }
        }
        cout<<"Case "<<cas<<": "<<cnt<<endl;
    }
return 0;
}
