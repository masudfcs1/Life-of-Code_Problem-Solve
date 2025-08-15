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
	int k; cin>>k;
	vector<int>a(12);
	for(int i=0;i<12;i++) cin>>a[i];
	
	sort(a.begin(),a.end(),greater<int>());
	int cnt=0;
	int sum=0;
	for(int i=0;i<12;i++){
		sum+=a[i];
		cnt++;
		if(sum>=k) break;
	}
	
	
	if(sum<k) cout<<-1<<e;
	else if(k==0) cout<<0<<e;
	else cout<<cnt<<e;

}

int main()
{
  fast;
  solve();

    return 0;
}




