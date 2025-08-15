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
  int t; cin>>t;
  while(t--){
  	string a,b,c; cin>>a>>b>>c;
  	int k=0;
  	for(int i=0;i<a.size();i++){
  		if(a[i]==c[i]||c[i]==b[i]){
  			k++;
		  }
	  }
  	
  
  	if(a.size()==k) cout<<"YES"<<e;
  	else cout<<"NO"<<e;
	
  }


    return 0;
}


