#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N=4e5+8;
ll a[N];
int main()
{
    fast;
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        unordered_map<ll,ll>mp;
        ll sum=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum*2%n){
            cout<<0<<e;
            continue;
        }
        ll x=sum*2/n,ans=0;
        for(int i=1;i<=n;i++){
            ans+=mp[x-a[i]];
            mp[a[i]]++;
        }
        cout<<ans<<e;

    }

    return 0;
}
