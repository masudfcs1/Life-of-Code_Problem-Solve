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
	int t; cin>>t;
	while(t--){
		int a,b,c; cin>>a>>b>>c;
		int n=abs(a-b);
	//	cout<<max(a,max(b,c))>2*n ? -1:(c>n?c-n:c+n)<<"\n";
	     
	     if(max(a,max(b,c))>2*n) cout<<-1<<e;
	     else{
	     	if(c>n) cout<<c-n<<e;
	     	else cout<<c+n<<e;
		 }
	}
	
}

int main()
{
   fast;
   solve();

    return 0;
}

