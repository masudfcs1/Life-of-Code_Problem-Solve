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
  	if(n%2==1){
  		cout<<7;
  		n-=3;
	  }
	  
//	  while(n>0){
//	n-=2;
//		cout<<1;
//	}
//	
	for(int i=1;i<=n/2;i++){
		cout<<1;
	}	
	
cout<<e;
  }	


    return 0;
}


