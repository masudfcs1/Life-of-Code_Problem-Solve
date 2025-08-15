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
	ul n,k; cin>>n>>k; 
	ul cnt=-1;
	
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(n/i<=k){
				cnt=i;
				break;
			}
			else if(i<=k){
				cnt=n/i;
			}
		}
	}
	
	if(cnt==-1){
		cout<<n<<e;
	}
	else cout<<cnt<<e;
}

int main()
{
	fast;
  int t; cin>>t;
  while(t--){
   solve();
   }
    return 0;
}

