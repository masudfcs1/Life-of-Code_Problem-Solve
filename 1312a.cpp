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
   ll t; cin>>t;
   while(t--){
    ll n,m; cin>>n>>m;
    ll h=n-m;
    if(h<=3)
        cout<<"YES"<<e;
    else
        cout<<"NO"<<e;
   }

    return 0;
}
