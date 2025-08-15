#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back
#define pb         push_back
#define ll         long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//ll n[10000002];
void solve(){
	ll t; cin>>t;
	ll mn=10000000007,sum=0;
	ll n[100009],i;
	for( i=0;i<t;i++) cin>>n[i];
	
	for( i=0;i<t;i++){
		sum+=n[i];
		if(n[i]%2!=0){
			mn=min(n[i],mn);
		}
	}
	
	if(sum%2==0) cout<<sum<<e;
	else cout<<sum-mn<<e;
	
}

int main()
{
   fast;
   solve();

    return 0;
}

