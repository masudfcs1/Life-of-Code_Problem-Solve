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
  ll t; cin>>t;
  ll a,ans=0,s=0;
  while(t--){
  	cin>>a;
  	s+=a;
  	ans=max(ans,a);
  }
  if(s%2==1||s<2*ans){
  	cout<<"NO"<<e;
  	return 0;
  }
  cout<<"YES"<<e;
  


    return 0;
}


