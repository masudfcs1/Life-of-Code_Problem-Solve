#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll x,n,t,d;
int main()
{
	fast;
 cin>>t;
	while(t--){
		int n; cin>>n;
	 
		ll cnt0=0,cnt1=0;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x==0) cnt0++;
			else if(x==1) cnt1++;
		}
		 d=pow(2,cnt0);
		cout<<cnt1*d<<e;
	}


    return 0;
}

