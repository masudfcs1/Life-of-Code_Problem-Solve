#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int t; cin>>t;
    string s;

    while(t--){cin>>s;
        int ans=0;  int cnt=0,cnt1=0;
       for(int i=0;i<s.size();i++){
         if(s[i]=='(') cnt++;
         else if(s[i]=='[') cnt1++;
         else if(s[i]==')'){
            if(cnt){
                ans++;
                cnt--;
            }
         }
        else{
            if(cnt1){
                ans++;
                cnt1--;
            }
        }

       }cout<<ans<<e;


    }

    return 0;
}
