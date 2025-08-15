#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int t;
const int N=300*1000+13;
ll a[N],b[N];
int main()
{
    fast;
     cin>>t;
    while(t--){

       ll n; cin>>n;
       //vector<ll>a(N),b(N);
       fr(i,n) cin>>a[i]>>b[i];
       ll mn=1e18,sum=0;
       for(int i=0;i<n;i++){
          int nt=(i+1)%n;
          ll cal=min(a[nt],b[i]);
          sum+=a[nt]-cal;
          mn=min(mn,cal);

       }
       sum+=mn;
       cout<<sum<<e;
    }


    return 0;
}
