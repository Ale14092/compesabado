#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int perfec(ull a)
{
    ull c=1;
    for(ull i=2;i<a;i++)
    {
        if(!(a%i))
        {
            c+=i;
        }
    if(c==a) return true;
    }if(c!=a)
     return false;
}
int primo(ull a)
{
    ull c=2;
    if(a==2)
        return true;
    for(ull i=3;i<=sqrt(a);i+=2)
        if(!(a%i))
            c++;
    if(c==2)
        return true;
    else return false;
}
void solve()
{
    ull n,c=0;cin>>n;
    for(ull i=0;i<=n;i++)
        {
            c+=(1<<i);
            ull x=c;
            if(primo(x))
            {
                cout<<c<<" "<<x*(1<<i)<<endl;
            }
        }
}
main()
{
        solve();
}


