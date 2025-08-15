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
  fast;
  int x,y,z; cin>>x>>y>>z;
  int m=max(x,max(y,z));
  if(x>(y+z)) cout<<"+"<<e;
  else if(y>(x+z)) cout<<"-"<<e;
  else if((y==x)&&(z==0)) cout<<z<<e;
 else cout<<"?"<<e;
    return 0;
}


