#include<bits/stdc++.h>
#define Q int n;cin>>n;while(n--)
using namespace std;
void solve()
{
    int a;
    cin>>a;int c=2;
    for(int i=2;i<=a/2;i++)
        if(!(a%i))
        c++;
    cout<<c<<'\n';
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    Q solve();
}
