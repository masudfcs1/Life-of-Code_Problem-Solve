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
  	ul a,b; cin>>a>>b;
  	if(a>b) swap(a,b);
  	int cnt=0;
  	while(a<b){
  		cnt++; a*=2;
	  }
	  if(a!=b) cout<<-1<<e;
	  else {
	  	
	  	cout<<cnt<<" "<<(cnt+2)/3<<e;
	  }
  	
  }

    return 0;
}


