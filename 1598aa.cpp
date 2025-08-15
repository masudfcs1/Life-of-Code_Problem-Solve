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
    //fast;
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        string x,y; cin>>x>>y;
        for(int i=0;i<n;i++)
          if(x[i]=='1'&&x[i]==y[i])
             return cout<<"NO"<<e,0;

            cout<<"YES"<<e;
    }

    return 0;
}
