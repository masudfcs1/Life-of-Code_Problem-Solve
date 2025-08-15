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
	int a[30001];
	for(int i=0;i<t; i++) cin>>a[i];
	
	sort(a,a+t);
	int j=0;
	for(int i=0;i<3000;i++){
		if(a[i]!=i+1){
			j=i+1;
			break;
		}
	} 
	
	if(j==0) cout<<t+1<<e;
	else cout<<j<<e;


}

int main()
{
  fast;
  solve();
  
    return 0;
}


