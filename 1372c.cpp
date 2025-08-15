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
//    fast();
   long int t; cin>>t;

   int cnt=0;
   while(t--){
        ll n; cin>>n;
        vector<ll>a(n+1);
   vector<ll>v;
        for(int i=1;i<=n;i++){
            cin>>a[i];
          if(a[i]!=i)
                v.push_back(i);
        }
    if(v.size()==0)
        cout<<0<<e;
    else{
        bool two=false;
        for(int i=0;i<(int)v.size()-1;i++)
        {
            if(v[i+1]-v[i]>=2)
                two=true;
        }
        if(two==false)
            cout<<1<<e;
        else
            cout<<2<<e;
    }

   }

    return 0;
}
