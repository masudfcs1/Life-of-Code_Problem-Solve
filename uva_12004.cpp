#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)  cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int t; cin>>t;
    for(int i=1;i<=t;i++){
       ll n; cin>>n;
       ll ans=n*(n-1);
       pct(i);

       if(ans%4==0)
            cout<<ans/4<<e;
       else
        printf("%lld/2\n",ans/2);
    }

    return 0;
}
