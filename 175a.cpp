#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ll         long long int
#define ul         unsigned long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
  fast;
  ll t; cin>>t;
  while(t--){
  	ll cnt=0;
  	ll n,k; cin>>n>>k;
  	while(n>0){
  		if(n%k==0){
  			
  			n/=k;
			cnt++;
		  }
		else{
			ll cnt1=n%k;
			cnt+=cnt1;
  			n-=cnt1;
		}
	  }
	  cout<<cnt<<e;
  }


    return 0;
}


