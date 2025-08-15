// Problem: A. Powered Addition
// Contest: Codeforces - Codeforces Round #633 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1338/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
const int N=10e8+5;
void solve(){
	
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		vector<int>a(n);
		//for(int i=0;i<n;i++) 
		
		int cnt=0;
		
		for(ll i=0;i<n;i++){
			cin>>a[i];
			if(i>=1){
				if(a[i]<a[i-1]){
					cnt=max(cnt,a[i-1]-a[i]);
					a[i]=a[i-1];
				}
			}
		}
		if(cnt==0) cout<<0<<e;
		else cout<<floor(log2(cnt)+1)<<e;
	}

}

int main()
{
   fast;
   solve();

    return 0;
}
