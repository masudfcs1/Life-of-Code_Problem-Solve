#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ll         long long int
#define ul         unsigned long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
  fast; int k; cin>>k;
  string s,t; //cin>>s;
  for(int i=0;i<=k;i++){
  	s+= to_string(i);
  }
  
  cout<<s[k]<<e;

    return 0;
}


