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
	while(t--){
		ll n; cin>>n;
		string s="989";
		if(n<=3){
			cout<<s.substr(0,n)<<e,0;
		}
	    cout<<s;
		for(ll i=3;i<n;i++){
			cout<<(i-3)%10;
		
		}
		
	}


    return 0;
}


