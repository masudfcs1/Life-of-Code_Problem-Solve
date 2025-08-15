// Problem: B. Phoenix and Beauty
// Contest: Codeforces - Codeforces Round #638 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1348/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
	
		int n,k; cin>>n>>k;
		int a; 
		set<int>s;
		for(int i=0;i<n;i++){
			cin>>a;
			s.insert(a);
		} 
		
		if(s.size()>k){
			cout<<-1<<e;
			return;
		}
		
		cout<<n*k<<e;
		for(int i=0;i<n;i++){
		  
		  for(auto x: s) cout<<x<<' ';
		  
		  for(int j=0;j<k-(int)s.size();j++)
		  	 cout<<1<<' ';
		  
	
		}
			 cout<<e;
		
	

}

int main()
{
   fast;
   int t; cin>>t;
	while(t--){
   solve();
   }

    return 0;
}