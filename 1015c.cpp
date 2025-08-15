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
    ll n,m; cin>>n>>m;
    ll s=0,s1=0;
    int a[n],b[n];
    fr(i,n){
      cin>>a[i]>>b[i];
    }

    fr(i,n){
     s+=a[i];
     s1+=b[i];
    }
    ll x=s-m;
    ll c[n];
    if(s1>m){
        cout<<-1<<e;
        return 0;
    }

    else{
        fr(i,n){
          c[i]=a[i]-b[i];
        }
    }

    sort(c,c+n);

    ll l=0;
    ll st=0;
    ll p=n-1;
    while(st<x)
    {
        st+=c[p];
         p--;
         l++;
    }

    cout<<l<<e;


    return 0;
}
