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
        ll a,b,c; cin>>a>>b>>c;
        int s=a+b+c;
        if(s%9!=0)
            cout<<"NO"<<e;
        else
        {
            if(min(a,min(b,c))>=s/9){
                cout<<"YES"<<e;
            }
            else
                cout<<"NO"<<e;
        }
    }

    return 0;
}
