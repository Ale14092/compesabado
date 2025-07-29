#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,may=0;cin>>a;
    vector<int>v(10000000,0);
    for(int i=0;i<a;i++)
    {
        int x;
        cin>>x;
        may=max(may,x);
        v[x]++;
    }
    for(int i=may;i>=1;i--)
    {
        int c=0;
        for(int j=i;j<=may;j+=i)
            c+=v[j];
        if(c>1)
        {
            cout<<i<<'\n';
            break;
        }
    }
}
