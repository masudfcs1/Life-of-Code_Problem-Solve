#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back()
#define pb         push_back()
#define ll         long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	
	int a,b,c; cin>>a>>b>>c;
	int x=sqrt(a*b/c);
	int y=sqrt(b*c/a);
	int z=sqrt(c*a/b);
	cout<<4*(x+y+z)<<e;


}

int main()
{
  fast;
  solve();
  
    return 0;
}


