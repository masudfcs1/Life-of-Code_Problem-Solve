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
const int INF=1e18+1;
void solve(){
	
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		string s;
		for(int i=0;i<n;i++) a[i]=0;
		
		int mx=INF;
		for(int i=1;i<=n;i++){
			int x; cin>>x;
			if(a[x]==0)  a[x]=i;
			else{
				mx=min(i-a[x],mx);
				a[x]=i;
			}
		}
		if(mx==INF) cout<<-1<<e;
		else cout<<mx+1<<e;
		
		
		
	}

}

int main()
{
   fast;
    solve();
    return 0;
}

