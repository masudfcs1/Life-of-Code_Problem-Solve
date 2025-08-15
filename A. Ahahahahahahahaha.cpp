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
	int n; cin>>n;
	vector<int>a(n);
	int cnt0=0;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(!a[i]){
			cnt0++;
		}
	}  
	
	int cnt1=n-cnt0;
	if(cnt0>=n/2){
		cout<<cnt0<<e;
		for(int i=0;i<cnt0;i++) cout<<0<<' ';
	}
	else{
		cout<<cnt1-cnt1%2<<e;
		for(int i=0;i<cnt1-cnt1%2;i++){
			cout<<1<<' ';
		}
	}
	
	cout<<e;

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

