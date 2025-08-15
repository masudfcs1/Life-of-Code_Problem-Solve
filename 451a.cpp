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
    int n,m; cin>>n>>m;
      if(min(n,m)&1)
        cout<<"Akshat"<<e;
      else
        cout<<"Malvika"<<e;

    return 0;
}
