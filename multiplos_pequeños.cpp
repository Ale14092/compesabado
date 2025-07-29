#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int a;
    while(cin>>a && a!=0)
    {
        if(a%10==0)
            cout<<a<<'\n';
        else
        cout<<pow(10,int(log10(a)+1))<<'\n';
    }
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    solve();
}
