#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll mod=1e9+7;
int main()
{
    string s; cin>>s;
    int n=s.size();
    for(char x: s){
        if(x=='m'||x=='w'){
            cout<<0<<e;
            return 0;
        }
    }
    vector<int>dp(n+1);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1];
        if(s[i-1]==s[i-2]&&(s[i-1]=='u'||s[i-1]=='n'))
            dp[i]=(dp[i]+dp[i-2])%mod;
    }
    cout<<dp[n]<<e;


    return 0;
}
