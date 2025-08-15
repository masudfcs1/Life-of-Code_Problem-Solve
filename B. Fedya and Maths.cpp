// Problem: B. Fedya and Maths
// Contest: Codeforces - Codeforces Round #260 (Div. 2)
// URL: https://codeforces.com/problemset/problem/456/B
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
#define int6       int128_t
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	
	// int64_t n; cin>>n;
	// int6 a1=pow(1,n);
	// int6 a2=pow(2,n);
	// int6 a3=pow(3,n);
	// int6 a4=pow(4,n);
// 	
	// int6 sum=a1+a2+a3+a4;
// 	
	// cout<<sum%5<<e;
// 	
	// // int6 n; cin>>n;
	// // cout<<n+2<<e;
	
	string n; cin>>n;
	
	//int sum=;
	int sum=0;
	int st=n.size();
	 sum+=n[st-1]+10*n[st-2];
	
	if(sum%4==0) cout<<4<<e;
	else cout<<0<<e;
	

}

int main()
{
   fast;
   solve();

    return 0;
}