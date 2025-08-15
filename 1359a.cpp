#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i,n)  cout<<"Case "<<i<<": "<<n<<endl;
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        int f=n/k;
        int a1=min(f,m);
        int s=m-a1+k-2;
        int a2=s/(k-1);
        cout<<a1-a2<<e;
    }


    return 0;
}
