#include<bits/stdc++.h>
using namespace std;
stack<string>ford;
stack<string>bak;
int main(){
    string s,ss,stand;
    int t,i=0;
    scanf("%d",&t);
    while(t--){
            printf("Case %d:\n",++i);
            stand="http://www.lightoj.com/";
        while(1){
            cin>>s;
            if(s=="QUIT"){
                    while(!(bak.empty())){
                        bak.pop();
                    }
                    while(!(ford.empty())){
                        ford.pop();
                    }
                break;
            }
            else if(s=="VISIT"){
                cin>>ss;
                cout<<ss<<endl;
                bak.push(stand);
                stand =ss;
                while(!(ford.empty())){
                        ford.pop();
                    }
            }
            else if(s=="FORWARD"){
                    if(ford.empty()){
                        cout<<"Ignored"<<endl;
                    }
                    else{
                        bak.push(stand);
                        stand = ford.top();
                        ford.pop();
                        cout<<stand<<endl;
                    }
            }
            else if(s=="BACK"){
                    if(bak.empty()){
                        cout<<"Ignored"<<endl;
                    }
                    else{
                        ford.push(stand);
                        stand=bak.top();
                        bak.pop();
                        cout<<stand<<endl;

                    }
            }
    }
}

return 0;
}
/*


2
VISIT http://uva.onlinejudge.org/
VISIT http://topcoder.com/
BACK
BACK
BACK
FORWARD
VISIT http://acm.sgu.ru/
BACK
BACK
FORWARD
FORWARD
FORWARD
QUIT
VISIT http://uva.onlinejudge.org/
VISIT http://topcoder.com/
BACK
BACK
BACK
FORWARD
VISIT http://acm.sgu.ru/
BACK
BACK
FORWARD
FORWARD
FORWARD
QUIT

*/
