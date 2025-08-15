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
    int t; cin>>t;
    string s;
    while(t--){cin>>s;
            int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') a++;
            else if(s[i]=='B') b++;
            else c++;
        }
        if(a+c==b)
            cout<<"YES"<<e;
        else
            cout<<"NO"<<e;
    }
    return 0;
}
