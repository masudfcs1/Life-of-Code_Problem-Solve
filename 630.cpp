#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define fr(i,n)   for(int i=1;i<=n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    ll n; cin>>n;
      ll sum=0;
      fr(i,n){
         sum+=(pow(2,i));
      }
      cout<<sum<<e;

    return 0;
}
