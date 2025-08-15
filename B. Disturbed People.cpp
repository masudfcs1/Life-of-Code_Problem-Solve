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

void solve(){
	ll t; cin>>t;
	// vector<int>a(t);
	ll a[t];
	fr(i,t){
		 cin>>a[i];
	 }
	 int ans=0;
	 
	 fr(i,t){
	 	if(a[i]== 0 and a[i-1]==1 and a[i+1]==1){
	 		ans++;
	 		a[i+1]=0;
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