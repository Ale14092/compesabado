#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long a;
    cin>>a;long long c=0;
    for(long long i=1;i<=a;i++)
    {
        c+=(1+i);
        for(long long j=2;j<=a/2;j++)
            if(!(i%j))
                c+=j;
    }
    cout<<c;
}
main()
{
    solve();
}
