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
     int t; cin>>t;
     while(t--){
        ll a,b,c,d; cin>>a>>b>>c>>d;
        ll x,y,x1,y1,x2,y2; cin>>x>>y>>x1>>y1>>x2>>y2;
           if((x1<=x-a+b<=x2)and (x1<y1 or a+b==0))
             cout<<"YES"<<e;
          else
            cout<<"NO"<<e;

     }


    return 0;
}
