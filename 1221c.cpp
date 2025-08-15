#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
    ll c,m,x; cin>>c>>m>>x;
    ll ans=(c+m+x)/3;
    cout<<min(ans,min(c,m))<<e;
}

int main()
{
    int t=1; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
