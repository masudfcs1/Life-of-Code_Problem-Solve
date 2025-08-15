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
        ll a,b,c,d; cin>>a>>b>>c>>d;
        if((min(a,b)>max(c,d))||max(a,b)<min(c,d))
            cout<<"NO"<<e;
        else
            cout<<"YES"<<e;
    }

    return 0;
}
