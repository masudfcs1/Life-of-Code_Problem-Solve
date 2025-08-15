#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int n; cin>>n;
    vector<string>s(n),t(n);

    for(int i=0;i<n;i++){
            cin>>s[i]>>t[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]&&t[i]==t[j]){
                cout<<"Yes"<<e;
                return 0;
            }
        }
    }


    cout<<"No"<<e;



    return 0;
}
