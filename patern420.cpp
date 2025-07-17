#include<bits/stdc++.h>
using namespace std;
main()
{ return (b==0)?a:gcd(b,a%b)
    string a;cin>>a;
    int x=a.size()-1;
    for(int i=a.size();i>=1;i--,x=a.size()-1)
    {
        for(int j=1;j<=a.size();j++)
            if(j>=i)
            cout<<a[x--]<<" ";
            else cout<<"  ";
        cout<<endl;
    }
}
