#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
    ll n; cin>>n;
       std:: vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        set<double>s;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                double k=v[i]-v[j];
                k/=2;
                s.insert(k);
            }
        }

        cout<<s.size()<<e;
}
int main()
{
    fast();
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
