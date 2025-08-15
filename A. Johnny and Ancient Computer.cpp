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
		ul a,b; cin>>a>>b;
		if(a>b) swap(a,b);
		int cnt=0;
		while(a<b){
			a*=2;
			cnt++;
		}
		if(a!=b) cout<<-1<<e;
		else cout<<(cnt+2)/3<<e;
	}
	

}

int main()
{
   fast;
   solve();

    return 0;
}

