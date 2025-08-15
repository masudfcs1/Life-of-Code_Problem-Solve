#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//typedef   v        vector<int>vi;
const ll n=10e+10;
int main()
{
  fast;
  ul t; cin>>t;
  //ul a[t];
  int  s[7];
  for(int i=0;i<t;i++){
  	vector<int>v(7);
  	for(int i=0;i<7;i++){
  		cin>>s[i];
	  }
  	cout<<s[0]<<' '<<s[1]<<' '<<s[6]-s[0]-s[1]<<' '<<e;
  }


    return 0;
}


