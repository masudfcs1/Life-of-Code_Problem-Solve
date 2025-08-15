// Problem: Sample Problem
// Contest: Google Coding Competitions - Coding Practice with Kick Start Session #3 - Kick Start 2022
// URL: https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f49d7/0000000000bcee64
// Memory Limit: 1024 MB
// Time Limit: 60000 ms
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
	int i=1;
	while(t--){
		int n,s; cin>>n>>s;
		int x,sum=0;
		for(int j=0;j<n;j++){
			cin>>x;
			sum+=x;
		}
		
		cout<<"Case #"<<i<<": "<<sum%s<<e;
		i++;
	}

}

int main()
{
   fast;
   solve();

    return 0;
}
