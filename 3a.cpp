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
    cout<<max(abs(t[0]-s[0]),abs(t[1]-s[1]))<<e;

    while(s!=t){

    if(s[0]<t[0]){
        cout<<'R';
        s[0]++;
    }
    else if(s[0]>t[0]){
        cout<<'L';
        s[0]-=1;
    }
    if(s[1]<t[1]){
        cout<<'U';
        s[1]+=1;
    }
    else if(s[1]>t[1]){
        cout<<'D';
        s[1]-=1;
    }
    cout<<e;

 }


    return 0;
}
