#include<bits/stdc++.h>
#define Q int n;cin>>n;while(n--)
using namespace std;
void solve()
{
    int h1,h2,p1,p2,l1,l2,hu=0,pa=0,luis=0;
    cin>>h1>>h2>>p1>>p2>>l1>>l2;
    if(!((h1+h2)&1))
        hu=h1+h2;
    if(!((p1+p2)&1))
        pa=p1+p2;
    if(!((l1+l2)&1))
        luis=l1+l2;
    if(hu>pa && hu>luis)
        cout<<"Hugo"<<'\n';
    else if(pa>hu && pa>luis)
        cout<<"Paco"<<'\n';
    else if(luis>pa && luis>hu)
        cout<<"Luis"<<'\n';
    else cout<<"NADIE"<<'\n';
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    Q
    solve();

}
