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
  int n,k; cin>>n>>k;
  vector<int>a(n),b(n);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
  
  vector<int>c(n);
  fr(i,n) c[i]=a[i]-b[i];
  
  int ans=0;
  sort(c.begin(),c.end());
  fr(i,n){
  	if(i<k){
  		ans+=c[i];
	  }
	else{
		if(c[i]<=0) ans+=c[i];
		else break;
	}
  }
  fr(i,n) ans+=b[i];
  cout<<ans<<e;
  


    return 0;
}


