// Problem: C1. Good Subarrays (Easy Version)
// Contest: Codeforces - Codeforces Round #825 (Div. 2)
// URL: https://codeforces.com/contest/1736/problem/C1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// //Code Build: masudfps1
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
		int sum=0;
		vector<int>a(n,0);
		int x;
		//for(int i=1;i<=n;i++) cin>>x;
		
		for(int i=1;i<=n;i++){
			cin>>x;
			a[i]=min(a[i-1]+1,x);
			sum+=a[i];
		}
		
		cout<<sum<<e;
	}
	
}

int main()
{
   fast;
   solve();

    return 0;
}