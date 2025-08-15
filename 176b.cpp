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
    string s; cin>>s;
    ll sum=0;
    ll t=s.size();
    for(ll i=0;i<t;i++){
        sum+=s[i]-'0';
    }
    if(sum%9==0)
        cout<<"Yes"<<e;
    else
        cout<<"No"<<e;


    return 0;
}
