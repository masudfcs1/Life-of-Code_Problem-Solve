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
	//int t; cin>>t;
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<n;i++){
		if(a[i]=='0' and a[i+1]=='0'){
			a[i]=1;
		} 
		else if(a[i]=='1' and a[i+1]=='1'){
			a[i]=0;
		} 
	}
	
	for(int i=0;i<n;i++) cout<<a[i]<<' ';

}

int main()
{
   fast;
   solve();

    return 0;
}

