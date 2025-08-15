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
  int i, t; cin>>t;
  while(t--){
  	int n; cin>>n;
  	int mx=1;
  	while((mx*2)<n){
  		mx*=2;
	  }
	for(i=n-1;i>=mx;i--){
		cout<<i<<" ";
	}
	for(i=0;i<mx;i++){
		cout<<i<<" ";
	}
	cout<<e;
  }


    return 0;
}


