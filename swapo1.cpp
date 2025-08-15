#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        int sum=a+b;
        if(sum%2==0)
            cout<<a<<" "<<b<<e;
        else
        {
            swap(a,b);
            cout<<a<<" "<<b<<e;
        }
    }

    return 0;
}
