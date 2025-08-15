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
	fast;
	int t; cin>>t;
	ll a,b,c; 
	while(t--){
		cin>>a>>b>>c;
		if((a+b*2+3*c)%2==0)
		    cout<<0<<e;
	    else{
	    	cout<<1<<e;
		}
	}


    return 0;
}


