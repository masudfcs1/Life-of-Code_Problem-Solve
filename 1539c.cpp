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
    ll n,k,x,z; cin>>n>>k>>x;
    ll a[n];
    vector<ll>v;ll ans=n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);

    for(ll i=0;i<n-1;i++){
        z=a[i+1]-a[i];
        v.push_back(max(0ll,(z-1))/x);
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++){
        if(v[i]<=k){
            k-=v[i];
            ans--;
        }
    }
    cout<<ans<<e;
    return 0;
}
