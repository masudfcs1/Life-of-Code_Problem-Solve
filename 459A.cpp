#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back()
#define pb         push_back()
#define ll         long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	ll n; cin>>n;
	ll a[n]; ll mx=0; ll mn=1e18+1;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		mx=max(a[i],mx);
		mn=min(a[i],mn);
	}
	ll t1=0,t2=0;
	for(int i=0;i<n;i++){
		 t1+=(a[i]==mx);
		 t2+=(a[i]==mn);
	}
	 cout<<mx-mn<<" ";
	if(mx==mn) cout<<n*(n-1)/2<<e;
	else cout<<t1*t2<<e;
	
	


}

int main()
{
  fast;
  solve();
  
    return 0;
}


