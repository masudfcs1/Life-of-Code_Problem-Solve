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
  	int n; cin>>n; int a[n];
  	for(int i=0;i<n;i++) cin>>a[i];
  	sort(a,a+n);
//  	for(int i=1;i<n;i+=2) cout<<a[i]<<' ';
//  	
//  	for(int i=0;i<n;i+=2) cout<<a[i]<<' ';
//  	cout<<e;

	for(int i=n-1;i>=0;i--) cout<<a[i]<<" ";
	cout<<e;
	 
  }


    return 0;
}


