#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef           vector<int>vi;

int main()
{
  fast;
  ll t; cin>>t;
  while(t--){
  	ll n,x,y; cin>>n>>x>>y;
  	ll sum=0;
  	ll a[n];
  	for(ll i=0;i<n;i++) cin>>a[i];
  	for(ll i=0;i<n;i++) sum+=a[i];
  	
  	//tt=sum=x+y;
  	if((sum+x)%2==y%2) cout<<"Alice"<<e;
  	else cout<<"Bob"<<e;
  	
  }


    return 0;
}


