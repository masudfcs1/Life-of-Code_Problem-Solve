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
    ll n;
     cin>>n;
        vector<ll>v(n);
        vector<ll>a(n);
        unordered_map<ll,vector<ll>>um;
        for(int i=0;i<n;i++){
            cin>>v[i];
           um[v[i]].push_back(i);
        }
        a=v;
        sort(v.begin(),v.end());

        int mn=v[0];

        for(int i=0;i<n;i++){
            if(a[i]%mn!=0){
                if(v[i]!=a[i]){
                    cout<<"NO"<<e;
                    return;
                }
            }
        }
        cout<<"YES"<<e;

}

int main()
{
    fast;
    ll t; cin>>t;
    ll n,i=0;
    while(t--){
            i++;
    solve();

    }



    return 0;
}
