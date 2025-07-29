#include<bits/stdc++.h>
#define Q int n;cin>>n;while(n--)
using namespace std;
void solve()
{
   int a;cin>>a;
   int c=2,d=1,c1=1,b=0,c2=a;
   while(a>1)
   {
       if(!(a%c))
          a/=c,d++;
       else
            c++,c1*=d,d=1,b++;
   }
   if(c==c2) cout<<"2\n";
    else if(b>0)
    cout<<c1<<'\n';
    else
    cout<<d<<'\n';
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    Q solve();
}
