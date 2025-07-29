#include<bits/stdc++.h>
#define Q int n;cin>>n;while(n--)
using namespace std;
typedef long long ll;
ll po(ll a,ll b)
{
    ll mod=1e9+6;
    ll n1=1;
    while(b)
    {
        if(b&1) n1*=a,n1%=mod;
        a*=a,a%=mod,b/=2;
    }
    return n1;
}
ll p(ll a,ll b)
{
    ll mod=1e9+7;
    ll n1=1;
    while(b)
    {
        if(b&1) n1*=a,n1%=mod;
        a*=a,a%=mod,b/=2;
    }
    return n1;
}
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<p(a,(po(b,c)))<<'\n';
}
main()
{
    Q solve();
}
