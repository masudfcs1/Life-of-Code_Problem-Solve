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
  	int n; cin>>n;
  	int k=n%7;
  	int g=n%10;
  	if(g>=k){
  		cout<<n-k<<e;
	  }
	else cout<<n+7-k<<e;    
  }


    return 0;
}


