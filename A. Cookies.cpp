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
	int x[n]; 
	for(int i=0;i<n;i++) cin>>x[i];
	int cntodd=0,cnteven=0, sum=0;
//    
//    for(int i=0;i<n;i++){
//	
//	if(n&1){
//		if(x&1) cntodd++;
//		  cout<<cntodd<<e;
//		  break;
//	}
//	else if(n%2==0){
//		if(x%2==0) cnteven++;
//		cout<<cnteven<<e;
//		break;
//	}
		for(int i=0;i<n;i++) {
			sum+=x[i];
		}
		
		for(int i=0;i<n;i++){
			if(x[i]%2==0) cnteven++;
			else cntodd++;
		}
	
	if(sum%2==0) cout<<cnteven<<e;
	else cout<<cntodd<<e;
  
}

int main()
{
   fast;
   solve();

    return 0;
}

