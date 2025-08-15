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
	int t; cin>>t;
	while(t--){
//		int n; cin>>n;
//		//vector<int>a(n);
//		int a;
//		for(int i=0;i<n;i++) cin>>a;
//     	set<int>b;
//	//	sort(a.begin(),a.end());
//		int flag=0;
//		for(int i=0;i<n;i++){
//			b.insert(a);
//		}
//		if(b.size()==n) cout<<"YES"<<e;
//		else cout<<"NO"<<e;


		int n; cin>>n;
		int a;
		set<int>b;
		for(int i=0;i<n;i++){
			cin>>a;
		 b.insert(a);
		} 
		 
		 
		 cout<<(b.size()==n?"YES":"NO")<<e;
		
	
	}

}

int main()
{
  fast;
  solve();

    return 0;
}




