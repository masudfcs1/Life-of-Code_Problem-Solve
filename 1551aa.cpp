#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef           vector<int>vi;

int main()
{
  fast;
  ll t; cin>>t;
  while(t--){
  	ll n; cin>>n;
  	if(n%3==0){
  	    cout<<n/3<<" "<<n/3<<e;
	  }
	else if(n%3==1) cout<<n/3+1<<" "<<n/3<<e;
	else if(n%3==2) cout<<n/3<<" "<<n/3+1<<e;
  }


    return 0;
}


