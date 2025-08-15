#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i,n)  cout<<"Case "<<i<<": "<<n<<endl;
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int a,b,c; cin>>a>>b>>c;
    int x=a+(b*c);
    int y=a*(b+c);
    int z=a*b*c;
    int n=(a+b)*c;
    int br=a-b-c;
    int s=a+b+c;

    cout<<max(x,max(y,max(z,max(n,max(br,s)))))<<e;

    return 0;
}
