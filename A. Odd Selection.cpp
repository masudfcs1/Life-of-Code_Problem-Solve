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
		int n,x; cin>>n>>x;
		int a[n]; 
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int sum=0; bool ok=false;
		for(int i=0;i<x;i++){
			if(a[i]%2!=0){
				sum+=a[i];ok=true;
			} 
			
		}
		if(sum&1) cout<<"Yes"<<e;
		else cout<<"No"<<e;
	}

}

int main()
{
   fast;
   solve();

    return 0;
}

