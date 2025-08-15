#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
	int t; cin>>t;
	while(t--){
		ll x,y; cin>>x>>y;
		ll l=__gcd(x,y);
		if(l>1) cout<<0<<e;
		else if((__gcd(x+1,y)>1)||(__gcd(x,y+1)>1))cout<<1<<e;
		else cout<<2<<e;
	}


    return 0;
}


