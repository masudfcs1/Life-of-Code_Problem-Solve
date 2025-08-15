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
    string s,t; cin>>s>>t;
    if(s.size()!=t.size()){
        cout<<"No"<<e;
        return 0;
    }

    for(int32_t i=0;i<s.size();i++){
        bool v1=s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u';
        bool v2=t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u';
        if(v1!=v2){
            cout<<"No"<<e;
            return 0;
        }
    }

    cout<<"Yes"<<e;

    return 0;
}
