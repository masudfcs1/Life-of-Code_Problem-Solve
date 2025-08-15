#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
       fast;
     int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>s(n);
        for(auto &it: s) cin>>it;
        sort(s.begin(),s.end());
        int ans=INT_MAX;

        for(int i=0;i<n-1;i++)
        {
            ans=min(ans,s[i+1]-s[i]);
        }
        cout<<ans<<e;
    }

    return 0;
}
