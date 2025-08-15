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
    int t; cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;

        if(a==0&&b==0)
            cout<<0<<e;
        else if(a==b)
            cout<<1<<e;
        else if(abs(a-b)&1)
            cout<<-1<<e;
        else
            cout<<2<<e;
    }


    return 0;
}
