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
		int n; cin>>n;
		int a[n]; 
		for(int i=0;i<n;i++) cin>>a[i];
		
		int cnt=0;
		int am=INT_MAX;
		for(int i=n-1;i>=0;i--){
			if(a[i]>am) cnt++;
			am=min(am,a[i]);
		}
		cout<<cnt<<e;
		
	}


}

int main()
{
  fast;
  solve();
  
    return 0;
}


