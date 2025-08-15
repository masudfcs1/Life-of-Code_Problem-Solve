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
    fast;
    int t; cin>>t;
    int n;
    while(t--){
        cin>>n;
       int a[n+3],b[n+3];  int cnt=0;
       for(int i=0;i<n;i++)
           cin>>a[i];
        bool b1=true;
       for(int i=0;i<n;i++){
        cin>>b[i];
        b[i]-=a[i];
        if(b[i]<0)b1=false;
        if(b[i]>0&&b[i]!=b[i-1]) cnt++;
       }
       if(b1 && cnt<2)
         cout<<"YES"<<e;
       else
        cout<<"NO"<<e;

    }

    return 0;
}
