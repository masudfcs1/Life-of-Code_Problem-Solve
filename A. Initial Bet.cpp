#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back
#define pb         push_back
#define ll         long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	int n=5;
	int sum=0; 
	while(n--){
		int x; cin>>x;
		sum+=x;
	}
	
	if(sum%5||sum==0) cout<<-1<<e;
	else cout<<sum/5<<e;
}

int main()
{
   fast;
   solve();

    return 0;
}

