#include<bits/stdc++.h>
#define Q int n;cin>>n;while(n--)
using namespace std;
typedef long long ll;
ll p(ll a,ll b)
{
    ll mod=1e9+7;
    ll n=1;
    while(b)
    {
        if(b&1) n*=a,n%=mod;
        a*=a,a%=mod,b/=2;
    }
    return n;
}
void solve()
{
    ll a,b;
    cin>>a>>b;
    cout<<p(a,b)<<'\n';
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    Q solve();
}
