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
    int t;cin>>t;
    while(t--){
    	int a,b,c,d,e1,f; cin>>a>>b>>c>>d>>e1>>f;
    	

    	if((a==c ||c==e1|| a==e1) && (b==d ||b==f || d==f)) cout<<"NO"<<e;
    	else cout<<"YES"<<e;
    }
}

int main()
{
   fast;
   solve();
   

    return 0;
}
