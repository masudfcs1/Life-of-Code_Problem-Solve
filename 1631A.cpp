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
  int t,a=0,b=0,i; cin>>t;
  while(t--){
  	int n; cin>>n;   int a[n],b[n];
  	   for(int i=0;i<n;i++){
		cin>>a[i];  
     }
     
     for(int i=0;i<n;i++){
		cin>>b[i];  
     }
     
     for(int i=0;i<n;i++){
     	if(a[i]>b[i]){
     		swap(a[i],b[i]);
		 }
	 }
	 
	 int x=*max_element(a,a+n);
	 int y=*max_element(b,b+n);
	 
	 cout<<x*y<<e;
  }


    return 0;
}


