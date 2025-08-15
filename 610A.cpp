#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back()
#define pb         push_back()
#define ll         long 
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	ul  n; cin>>n;
	//ll sum=ceil(n/4);
	if(n&1) cout<<0<<e;
	else 
	cout<<(n-1)/4<<e;


}

int main()
{
  fast;
  solve();
  
    return 0;
}


