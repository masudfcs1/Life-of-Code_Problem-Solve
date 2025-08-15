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
		int a,b,p,q; cin>>a>>b>>p>>q;
		ll s1=p/a,s2=q/b;
		if(p%a==0&&q%b==0 and (abs(s1-s2)<=1))
		  cout<<"YES"<<e;
		else
		  cout<<"NO"<<e;
	}


    return 0;
}

