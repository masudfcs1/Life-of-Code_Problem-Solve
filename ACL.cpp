#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    ll a,b,c,d; cin>>a>>b>>c>>d;

    int l=max(a,c);
    int r=min(b,d);

    if(l<=r)
         cout<<"Yes"<<e;
    else
        cout<<"No"<<e;


    return 0;
}
