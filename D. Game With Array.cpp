// Problem: D. Game With Array
// Contest: Codeforces - Codeforces Round #643 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1355/D
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
	
	fast;
  int n;int s; cin>>n>>s;
  
  if(2*n<=s){
  	cout<<"YES"<<e;
  	for(int i=0;i<n-1;i++){
  		cout<<2<<' ';
  		s-=2;
  	}
  	cout<<s<<e<<1;
  }
  else
     cout<<"NO"<<e;

}

int main()
{
   fast;
   solve();

    return 0;
}
