#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    string s,t; cin>>s>>t;
    int s1=s.size();
    int t1=t.size();

    if(s1<t1)
        cout<<"Yes"<<e;
    else
        cout<<"No"<<e;

    return 0;
}
