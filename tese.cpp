#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    fast();
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll  ans=0;
        for(int i=1;i<n;i++){
            ans=max(ans,1LL*a[i]*a[i-1]);
        }
        cout<<ans<<e;
    }


    return 0;
}

