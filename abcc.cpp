#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int a,b,c; cin>>a>>b>>c;
    int k; cin>>k;
    int cnt=0;
    while(b<=a){
        cnt++;
        b*=2;
    }
    while(c<=b){
        cnt++;
        c*=2;
    }
    if(cnt<=k)
        cout<<"Yes"<<e;
    else
        cout<<"No"<<e;


    return 0;
}
