#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    cout<<fixed<<setprecision(15);
    fast();ll sum; ll maxx;
    long t;  cin>>t; vector<long>n(t);

     for(int i=0;i<t;i++) cin>>n[i];

      long a1=0;
      for(int i=0;i<t;i++) a1+=abs(n[i]);
      cout<<a1<<e;


      long a4=0;
      for(int i=0;i<t;i++) a4+=abs(n[i]*(long)abs(n[i]));
        cout<<sqrt(a4)<<e;

      long a3=0;
      for(int i=0;i<t;i++) a3=max(a3,abs(n[i]));
      cout<<a3<<e;



    return 0;
}
