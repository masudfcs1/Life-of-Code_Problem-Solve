// Problem: C. Array Splitting
// Contest: Codeforces - Educational Codeforces Round 69 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1197/C
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
	vector<int>a(n);
	
	for(int i=0;i<n;i++) cin>>a[i];
	vector<int>v;
	
	for(int i=0;i<n;i++){
		v.push_back(a[i-1]-a[i]);
	}
	sort(v.begin(),v.end());
	
	//for(int i=0;i<n;i++) cout<<v[i]<<" ";
	
	 int cnt=a[n-1]-a[0];
	 for(int i=0;i<k-1;i++) cnt+=v[i];
 	
	 cout<<cnt<<e;
 	

}

int main()
{
   fast;
   solve();

    return 0;
}
