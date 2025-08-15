#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    long long int n; cin>>n;
    string ans;
    while(n>0){
        if(n%2){
            ans+='A'; n--;
        }
        else{
            ans+='B'; n/=2;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<e;

    return 0;
}
