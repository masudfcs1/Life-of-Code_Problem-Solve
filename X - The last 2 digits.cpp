// Author: masudfps1


#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back
#define pb         push_back
#define ll         long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
    ll a,b,c,d; cin>>a>>b>>c>>d;
    // ll str=a*b*c*d;
    // cout<<str%9<<str%10<<e;
     ll len=a*b*c*d;
    string str=to_string(len);
    int  n=str.length();
    cout<<str[n-1]<<str[n]<<e;
    //cout<<n<<e;
    

}

int main()
{
   fast;
   solve();
    return 0;
}
