#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long double
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    long double h,l; cin>>h>>l;
    double t=(l*l)-(h*h);
    ll w=t/(2*h);
    cout<<fixed<<setprecision(13)<<w<<e;


    return 0;
}
