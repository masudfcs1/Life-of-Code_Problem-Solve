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
    int q; cin>>q;
    while(q--)
    {
        ll n; cin>>n; bool t=true;
        ll s[n];ll sum=0;
        for(int i=0;i<n;i++){
              cin>>s[i];
              if(s[i]<=2048)
              sum+=s[i];
        }
        if(sum>=2048)
            cout<<"YES"<<e;
        else
            cout<<"NO"<<e;


    }
    return 0;
}
