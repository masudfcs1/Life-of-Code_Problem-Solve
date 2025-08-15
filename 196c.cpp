#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
  ll n; cin>>n;
    ll sum=11;
    ll ans=0;
     for(int i=1;i<=1000000;i++){
      string t=to_string(i)+to_string(i);
      ll x=stoll(t);
      if(x<=n){
           ans++;
      }

    }

    cout<<ans<<e;

}
int main()
{
    fast;
    solve();
    return 0;
}
