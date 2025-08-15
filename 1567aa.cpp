#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i,n)  cout<<"Case "<<i<<": "<<n<<endl;
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s,a; cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U'){ a+='D';}
            else if(s[i]=='D'){ a+='U';}
            else{ a+="LR"; i++;}
        }
        cout<<a<<e;
    }


    return 0;
}
