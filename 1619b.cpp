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
  int a,n; 
  while(t--){
  	cin>>n;
  	set<ll>a;
  	for(int i=1;i*i<=n;i++){
  		a.insert(i*i);
	  }
	for(int i=1;i*i*i<=n;i++){
		a.insert(i*i*i);
	}
	cout<<a.size()<<e;
  }

    return 0;
}


