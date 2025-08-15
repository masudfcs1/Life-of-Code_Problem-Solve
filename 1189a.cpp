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
  int n; cin>>n; 
  string s; cin>>s;
  int cnt1=0,cnt0=0;
  for(int i=0;i<n;i++){
  	if(s[i]=='0') cnt0++;
  	else cnt1++;
  	
  }
  if(cnt1!=cnt0)
  	cout<<1<<e<<s;
  
  else{
  	cout<<2<<e;
  	cout<<s[0]<<" ";
  	for(int i=1;i<n;i++)
  	  cout<<s[i];
  }
  
  

    return 0;
}


