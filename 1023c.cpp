#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    ll n,k; cin>>n>>k;
    int cnt=0,open=0,close=0;
    char a;
    for(ll i=0;i<n;i++){
        cin>>a;
        if(a=='(') open++;
        else close++;
        cout<<a;
        if(open==k/2) break;
    }
    for(ll i=0;i<open-close;i++) cout<<')';

    return 0;
}
