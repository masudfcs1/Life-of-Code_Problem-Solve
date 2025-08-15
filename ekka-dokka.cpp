// Problem: Ekka Dokka
// Contest: LightOJ
// URL: https://lightoj.com/problem/ekka-dokka
// Memory Limit: 64 MB
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
	
	ll t; cin>>t;
	for(int i=1;i<=t;i++){
		ll x; cin>>x;
		
		ll n,m;
		
		if(x%2==0){
			 n=x/2;
			 m=2;
			 
			 while(n%2==0){
			 	n/=2;
			 	m*=2;
			 }
          cout<<"Case "<<i<<": "<<n<<" "<<m<<e;
		}
		else 
		  cout<<"Case "<<i<<": "<<"Impossible"<<e;
		
		
	}

}

int main()
{
   fast;
   solve();

    return 0;
}
