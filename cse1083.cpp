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
	ll t; cin>>t; ll n;
	ll sum=0;
	for(int i=0;i<t-1;i++){
		cin>>n;
		sum+=n;
	}
	
	cout<<t*(t+1)/2-sum<<e;


    return 0;
}


