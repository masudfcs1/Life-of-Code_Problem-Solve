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
    while(t--){
        int a,b; cin>>a>>b;
        if(a>0&&b>0)
            cout<<"Solution"<<e;
        else if(a==0)
            cout<<"Liquid"<<e;
        else
            cout<<"Solid"<<e;
    }


    return 0;
}
