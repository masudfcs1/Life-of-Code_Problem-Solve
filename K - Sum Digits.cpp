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
	
	ll nn; cin>>nn;
	ll sum=0;
	string t; cin>>t;
	fr(i,t.size()){
		//cin>>t;
	  sum+=t[i]-'0';
	}
	

  cout<<sum<<e;

}

int main()
{
   fast;
   solve();

    return 0;
}