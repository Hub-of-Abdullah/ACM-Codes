#include<bits/stdc++.h>
using namespace std;
int x,y;
string ans,s1,s2;

int main()
{
    cin>>s1>>s2;
    x = s1.size();
    y = s2.size();
    int i,j;
    int table[x+1][y+1];
    for( i = 0; i <= x; i++){
       for( j = 0;j <= y; j++)
            table[i][j] = 0;
    }


    for( i =1; i<=x; i++)
    {
        for( j = 1; j<=y; j++)
        {

            if(s1[i-1] == s2[j-1])
            {
                table[i][j] = 1 + table[i-1][j-1];
            }
            else
            {
                table[i][j] = max(table[i][j-1],table[i-1][j]);
            }
        }
    }
    i = x;
    j = y;
    //cout<<i<<j<<endl;

    while(i>0 && j>0){
            if(table[i][j] == table[i-1][j])i--;
            else if(table[i][j] == table[i][j-1]) j--;
            else {
                i--;j--;
                ans+=s1[i];
                //cout<<ans<<endl;
            }
    }


   // cout<<ans<<endl;
        reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

    // reverse(str.begin(), str.end());
//    print(0,0);
    return 0;
}
