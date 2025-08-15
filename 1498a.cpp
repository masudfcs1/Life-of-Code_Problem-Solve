#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long s(long long int n){
        ll i=n;
        ll last=n%10;
        for(i=n;i>=10;i/=10);
        ll sum=i+last;
        ll s1=__gcd(n,sum);
        return s1;

}
int main()
{
    fast();
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;



        if(s(n)!=1)
            cout<<n<<e;
        else if(s(n+1)!=1)
            cout<<n+1<<e;
        else if(s(n+2)!=1)
            cout<<n+2<<e;
    }

    return 0;
}

