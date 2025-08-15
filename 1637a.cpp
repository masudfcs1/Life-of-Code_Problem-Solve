#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define cinarr(x) for(auto &q: x) cin >> q;
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
  fast;
  int t; cin>>t;
  while(t--){
  	int n; cin>>n;
  	vector<ll>a(n);
  	cinarr(a);
  	vector<ll> b=a;
  	sort(b.begin(),b.end());
  	
  	
  	
  	if(b==a) cout<<"NO"<<e;
  	else cout<<"YES"<<e;
  }


    return 0;
}


