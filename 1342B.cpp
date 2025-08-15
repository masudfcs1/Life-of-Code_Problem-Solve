#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back()
#define pb         push_back()
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
		string s; cin>>s;
		int z=0,O=0;
		for(auto i: s){
			if(i=='0') O++;
			else z++;
		}
		if(O==0||z==0){
			cout<<s<<e;
		}
		else {
			int tt=s.size();
			while(tt--){
				cout<<"01";
			}
			cout<<e;
		}
	}
}

int main()
{
  fast;
  solve();
  
    return 0;
}


