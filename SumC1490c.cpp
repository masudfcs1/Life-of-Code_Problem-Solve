#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
     ll n; cin>>n;
        for(ll i=1;i<=n;i++){
            if((pow(i,3)+pow(i,3))==n){
                cout<<"YES"<<e;
                return ;
            }


        }
        cout<<"NO"<<e;
                //return 0;
}

int main()
{
    int t; cin>>t;
    while(t--){
     solve();
    }

    return 0;
}
