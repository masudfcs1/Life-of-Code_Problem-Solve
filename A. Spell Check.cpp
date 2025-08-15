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
	
	string na="Timur";
	sort(na.begin(),na.end());
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string s; cin>>s;
		sort(s.begin(),s.end());
		
		cout<<(na==s? "YES":"NO")<<e;
		
	}

}

int main()
{
   fast;
   solve();

    return 0;
}

