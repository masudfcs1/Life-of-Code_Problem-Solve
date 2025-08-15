#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int t; cin>>t;
    while(t--){
        long double p,a,b,c; cin>>p>>a>>b>>c;
         cout<<(ll)(min(min(ceil(p/a)*a,ceil(p/b)*b),ceil(p/c)*c)-p)<<e;
    }


    return 0;
}
