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
        int n; cin>>n;
        string s; cin>>s; int c1=0,c2=0;
        for(int i=0;i<s.size();i++){
           if(s[i]=='U'){
                c1++;
                s[c1]='D';
            }
            if(s[i]=='U'){
                s[i]='D';
            }
            if(s[i]=='D'){
                s[i]=='U';
            }


            cout<<s[i];
        }
        cout<<e;
       // cout<<s;
    }


    return 0;
}
