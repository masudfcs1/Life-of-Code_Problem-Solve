#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int n; cin>>n;
    while(n--){
        ll t; cin>>t;
    ll a[t+10];
    map<ll,ll>mp;
    for(ll i=0;i<t;i++){
        cin>>a[i];
        mp[a[i]]=1;
    }
    vector<ll>v;
    for(ll i=0;i<t;i++){
        v.push_back(a[i]);
        for(ll l=a[i]+1;l<=2*t;l++){
            if(mp[l]==0){
                mp[l]=1;
                v.push_back(l);
                break;
            }
        }
    }
    if(v.size()==2*t){
        for(auto x: v){
            cout<<x<<' ';
        }
        cout<<e;
    }
    else
        cout<<-1<<e;
    }


    return 0;
}
