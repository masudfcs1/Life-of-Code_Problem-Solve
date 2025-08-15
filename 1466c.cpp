#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
     string s; cin>>s;
     int l=s.size();
        if(l<=1){
            cout<<0<<e;
        }
        else if(l==2){
            if(s[0]==s[1]) cout<<1<<e;
            else cout<<0<<e;
        }
        else{
            for(int i=1;i<l;i++){
                if((s[i]==s[i-1])||((i-2)>=0&&s[i]==s[i-2]))
              {
                  s[i]='*';
              }
            }
            int cnt=0;
            for(char ch:s){
                if(ch=='*'){
                    cnt++;
                }
            }
            cout<<cnt<<e;
        }
}
int main()
{
    long int t; cin>>t;

    int cnt=0;
    while(t--){

       solve();
    }

    return 0;
}
