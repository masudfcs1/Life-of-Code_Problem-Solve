#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll v[4],sum=0;
int main()
{
   fr(i,4) cin>>v[i];

   sort(v,v+3);
     sum=v[1]+v[2]+v[3];

    ll b=sum/3;
    cout<<min(b,v[1]+v[2])<<e;




    return 0;
}
