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
    fast;
    ll t; cin>>t;
    read:
        while(t--){
            string s;
            ll x; cin>>s>>x;
            string u(s.size(),'0');
            for(ll i=0;i<s.size();i++){
                if(s[i]=='1'){
                    if(i-x>=0 && (i-2*x<0||s[i-2*x]=='1'))
                        u[i-x]='1';
                    else if(i+x<s.size()&&(i+2*x>=s.size()||s[i+2*x]=='1'))
                        u[i+x]='1';
                    else
                    {
                        cout<<-1<<e;
                        goto read;
                    }
                }
            }
            cout<<u<<e;
        }

    return 0;
}
