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
int a[1000001];
void solve(){
	int n; cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	int mx=0,mn=1000000003,c1=0,c2=0;
	for(int i=0;i<n;i++) {
		mx=max(mx,a[i]);
		mn=min(a[i],mn);
	}
	
	for(int i=0;i<n;i++){
		if(a[i]==mx) c1++;
		if(a[i]==mn) c2++;
	}
	
	if(mx==mn) cout<<0<<e;
	else cout<<(n-c1-c2)<<e;
}

int main()
{
   fast;
   solve();

    return 0;
}

