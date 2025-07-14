#include<bits/stdc++.h>
#define Q int n;cin>>n;while(n--)
#define I cin.tie(0)->sync_with_stdio(0);
using namespace std;
void solve()
{
    int x=0,y=0;
    string s;cin>>s;
    for(int i=0;i<s.size();i++)
        if(s[i]!='1')
        {
            x+=s[i]-'0',y++;
        }
        else if(s[i]=='1' and s[i+1]=='0')
        {
            i++,x+=10,y++;
        }
        else {
            x++,y++;
        }
        cout<<double(x)/y<<'\n';
}
main()
{
    I
    Q solve();
}
