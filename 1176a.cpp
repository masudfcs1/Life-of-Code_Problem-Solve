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
  int t; cin>>t;
  while(t--){
  	ll n; cin>>n;
  	ll cnt=0,cnt3=0,cnt5=0;
	  while(n%2==0){
  		n/=2;
  		cnt++;
	  }
	  while(n%3==0){
	  	n/=3;
	  	cnt3++;
	  }
	  while(n%5==0){
	  	n/=5;
	  	cnt5++;
	  }
	  if(n!=1) cout<<-1<<e;
	  else cout<<(cnt+cnt3*2+cnt5*3)<<e;
	  
  }


    return 0;
}


