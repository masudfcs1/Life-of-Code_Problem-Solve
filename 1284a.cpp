#include<bits/stdc++.h>
using namespace std;

#define s second
#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
  fast;
  int n,m; cin>>n>>m;
  vector<string>s(n),v(m); 
  for(auto &a : s) cin>>a;
  for(auto &a : v) cin>>a;
  int q; cin>>q; int t; 
  for(int i=0;i<q; i++) {
  	cin>>t; t--;
  	cout<<s[t%n]+v[t%m]<<e;
  }
  
  


    return 0;
}


