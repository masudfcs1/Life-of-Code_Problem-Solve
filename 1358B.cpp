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
	
	
		int n; cin>>n;
		vector<int>s(n);
		cinarr(s);
		sort(s.begin(),s.end());
		for(int i=n-1;i>=0;i--){
			 if(s[i]<=i+1){
			 	cout<<i+2<<e;
			 	return;
			 }
		}
		cout<<1<<e;
		
	


}

int main()
{
  fast;
  int t; cin>>t;
	while(t--)
  solve();
  
    return 0;
}


