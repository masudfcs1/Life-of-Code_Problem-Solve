// Author: masudfps1


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
	ll n; cin>>n;
    vector<ll> v(n);
    ll od=0,ev=0;
    for(int i=0;i<n;i++){
    	cin>>v[i];
    	if(v[i]&1)od++;
    	else ev++;
    }

    ll c=0;
    sort(v.begin(), v.end());

    for (int i = 1; i < n; ++i)
    {
    	if(v[i]-v[i-1]==1) c++;
    }

    if(od%2==0 && ev%2==0){
    	cout<<"YES"<<e;
    }
    else if(c>0){
    	cout<<"YES"<<e;
    }
    else{
    	  cout<<"NO"<<e;
    }

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
