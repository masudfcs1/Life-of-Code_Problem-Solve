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
	int a,b,c,d; cin>>a>>b>>c>>d;
	
	int x=max((3*a)/10,a-(a/250)*c);
	int y=max((3*b)/10,b-(b/250)*d);
	
	if(x>y) cout<<"Misha"<<e;
	else if(x<y) cout<<"Vasya"<<e;
	else cout<<"Tie"<<e;
	
	


}

int main()
{
  fast;
  solve();
  
    return 0;
}


