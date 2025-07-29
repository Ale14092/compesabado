    #include<bits/stdc++.h>
    using namespace std;
    void solve()
    {
        int n,b;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;cin>>v[i++]);
        cin>>b;
        while(b--)
        {
            int x,y;
            cin>>x>>y;
            set<int>s;
            for(int i=x-1;i<y;i++)
                s.insert(v[i]);
            cout<<s.size()<<endl;
        }
    }
    main()
    {
        cin.tie(0)->sync_with_stdio(0);
        solve();
    }
