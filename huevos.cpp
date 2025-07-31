#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,c2=0;cin>>n;
    while(n--){
    int a,b,c,c1=0;
    cin>>a>>b>>c;
    vector<int>v(a);
    c2++;
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
        if(i<=b)
            c1+=v[i];
    }
    if(c1<=c)
        cout<<"Case "<<c2<<": "<<b<<endl;
    else
        for(int i=a,x=b;i>=0;i--)
            {
                c1-=v[i],x--;
            if(c1<=c){
                cout<<"Case "<<c2<<": "<<x<<endl;break;
                }
            }
    }
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
        solve();
}
