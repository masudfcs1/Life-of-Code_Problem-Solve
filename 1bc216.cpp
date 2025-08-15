#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int x,y; char c; cin>>x>>c>>y;

    if(7<=y&&y<=9)
        cout<<x<<'+'<<e;
    else if(0<=y&&y<=2)
        cout<<x<<'-'<<e;
    else
        cout<<x<<e;

    return 0;
}
