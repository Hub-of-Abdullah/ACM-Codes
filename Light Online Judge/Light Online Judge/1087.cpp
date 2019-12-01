#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PB push_back
vector<int>vi;
vector<int>v;
int arr[1000000];
int ar[1000000];

int main(){
    int t,i=0;
    char a;
    scanf("%d",&t);

    while(t--){
        memset(ar,0,sizeof(ar));
        int n,q,j,x,p,siz;
        printf("Case %d:\n",++i);
        scanf("%d %d",&n,&q);

        for(j=1;j<=n;j++){
            scanf("%d",&arr[j]);
            ar[j] = 1;
        }
        siz = n;
        for(int k=1;k<=q;k++){
            // cout<<"k = "<<k<<endl;
         //   scanf("%c %d",&a,&p);
            cin>>a>>p;

         // cout<<"a = "<<a<<" p = "<<p<<endl;
                if(a=='a'){
                    arr[j]=p; ar[j] = 1; siz ++;j++;
                     printf("%d \n",p);

                }

                else if(a=='c'){
                        if(p>siz){ printf("none\n");

                        }
                       else if(ar[p]==1){
                            printf("%dkkkkk \n",arr[p]);
                            ar[p]=0; siz--;
                        }
                        else{
                          while(!ar[p]){ p++; }
                            printf("%d \n",arr[p]);
                            ar[p]=0; siz--;
                        }
                }
                 //cout<<"mk = "<<k<<endl;

        }

    }

return 0;
}
