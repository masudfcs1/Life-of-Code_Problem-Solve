#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    long int t; cin>>t;
    while(t--){
        long long int n,k; cin>>n>>k;

        if( k*k<=n and n%2==k%2)
              cout<<"YES"<<e;
        else
            cout<<"NO"<<e;
    }

    return 0;
}
