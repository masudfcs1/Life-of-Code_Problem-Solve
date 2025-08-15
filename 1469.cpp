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
        string s; cin>>s;
        int flag=0;
        int ct=s.size();
        int cnt=0;

        for(int i=0;i<ct;i++){
            if(s[i]=='?'){
                cnt++;
            }
        }

        for(int i=0;i<ct;i++){

            if((s[i]=='(' && s[ct-1]==')')||(cnt%2==0)){
                flag=1;
            }
        }
        if(flag)
            cout<<"YES"<<e;
        else
            cout<<"NO"<<e;
    }


    return 0;
}
