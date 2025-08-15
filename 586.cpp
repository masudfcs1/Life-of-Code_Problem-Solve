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
  int n; cin>>n;
  int cnt=0;
  int a[n];
  for(int i=0;i<n;i++){
  	cin>>a[i];
	cnt+=a[i];	  	 
  }
  for(int i=0;i<n;i++){
  	 if(a[i]==1 and a[i+1]==0 and a[i+2]==1)
  	    cnt++;
  }
   cout<<cnt<<e;
  

    return 0;
}
