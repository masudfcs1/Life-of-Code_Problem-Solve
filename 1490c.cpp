#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll cub(ll a){
  return a*a*a;
}
bool check(ll x){
    for(ll i=1;cub(i)<x;i++){
        double b=cbrt(x-cub(i));
        if(floor(b)==b)
            return true;
    }
    return false;
}

int main()
{
    fast;
    ll t; cin>>t;
    while(t--){
        ll x;cin>>x;
        cout<<(check(x)? "YES":"NO")<<e;
    }
    return 0;
}
