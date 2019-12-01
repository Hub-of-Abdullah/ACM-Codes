#include<bits/stdc++.h>
using namespace std;
deque<int>dq;
int main()
{
    string s;
    int i=0,t,n,m,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        dq.clear();
        printf("Case %d:\n",++i);
        while(m--)
        {
            cin>>s;
            if(s=="pushLeft"){
                    cin>>x;
                if(dq.size()==n){
                    cout<<"The queue is full"<<endl;
                }
                else{
                    dq.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
            }

            else if(s=="pushRight") {
                cin>>x;
                if(dq.size()==n){
                    cout<<"The queue is full"<<endl;
                }
                else{
                    dq.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
            }

            else if(s=="popLeft"){
                if(dq.empty()) {
                    cout<<"The queue is empty"<<endl;
                }
                else{
                    cout<<"Popped from left: "<<dq.front()<<endl;
                    dq.pop_front();
                }
            }
            else if(s=="popRight") {
                if(dq.empty()){
                    cout<<"The queue is empty"<<endl;
                }
                else {
                    cout<<"Popped from right: "<<dq.back()<<endl;
                    dq.pop_back();
                }

            }
        }
    }

    return 0;
}
/*
2
3 8
pushLeft 1
pushLeft 2
pushRight -1
pushRight 1
popLeft
popRight
popLeft
popRight
3 8
pushLeft 1
pushLeft 2
pushRight -1
pushRight 1
popLeft
popRight
popLeft
popRight


*/
