// Problem: B. Trouble Sort
// Contest: Codeforces - Codeforces Round #648 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1365/B
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

void solve(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int>a(n),b(n);
		for(auto &x: a) cin>>x;
		for(auto &x: b) cin>>x;
		
		int sum=accumulate(all(b),0);
		
		if(sum==0 or sum==n){
			if(is_sorted(all(a))){
				cout<<"Yes"<<e;
				return;
			}
			else{
				cout<<"No"<<e;
			}
		}
		cout<<"Yes"<<e;
	}
}

int main()
{
   fast;
   solve();

    return 0;
}
