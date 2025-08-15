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
	ll t,p,l,c; cin>>t;
	while(t--){
		ll n,k,d; cin>>n>>k>>d;
		ll a[n],b[d];
		for(int i=0;i<n;i++)
		   cin>>a[i];
		
		c=INT_MAX;
		
		fr(i,n){
			if(i+d>n) break;
			 p=0;
		   l=0;
		  for(int j=i;j<i+d;j++){
		  	b[p]=a[j]; p++;
		  }  
		  sort(b,b+d);
		  fr(j,d)
		  	if(b[j]!=b[j+1]) l++;
		  
		  c=min(l,c);
		
		}
		if(c==0) 
		 cout<<1<<e;
		else
		 cout<<c<<e;
	}

    return 0;
}


