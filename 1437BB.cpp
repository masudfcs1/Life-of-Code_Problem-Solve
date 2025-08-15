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
		int n;cin>>n;
		string s; cin>>s;
		int one=0,zero=0;
	/*	for(int i=1;i<n;i++){
			if(s[i]==s[i-1]&&s[i]=='1') one++;
			if(s[i]==s[i-1] && s[i]=='0') zero++;
		}
		if(one==zero && zero==0) {
			cout<<0<<e;
			return;
		}
		if(one==0){
			cout<<zero<<e;
			return;
		}
		if(zero==0){
			cout<<one<<e;
			return;
		}
		
		int t=max(one,zero);
		cout<<t<<e;
		*/
		
		for(int i=0;i<n;i++){
			if(s[i]==s[i+1]) one++;
			
		}
		
		cout<<ceil(one/2.0)<<e;
	}
	


}

int main()
{
  fast;
  solve();
  
    return 0;
}


