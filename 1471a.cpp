#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
     int n,x; cin>>n>>x;
     ll f=0,l=0;
     for(ll i=0;i<n;i++){
        int a; cin>>a;
        l+=ceil((float)a/x);
        f+=a;
     }
     f=ceil((float)f/x);
     cout<<f<<' '<<l<<e;
}
int main()
{
    fast();
    int t=1; cin>>t;
    while(t--){
   solve();
    }

    return 0;
}
