#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    string s[3];
    bool abc=false; bool arc=false; bool agc=false; bool ahc=false;
    for(int i=0;i<3;i++){
        cin>>s[i];

    if(s[i]=="ABC")  abc=true;
    if(s[i]=="ARC")  arc=true;
    if(s[i]=="AGC")  agc=true;
    if(s[i]=="AHC")  ahc=true;

    }
    cout<<e;
    if(!abc) cout<<"ABC"<<e;
    if(!arc) cout<<"ARC"<<e;
    if(!agc) cout<<"AGC"<<e;
    if(!ahc) cout<<"AHC"<<e;

    return 0;
}
