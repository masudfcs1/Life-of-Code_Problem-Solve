#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        if(a!=b){
            cout<<"Happy Alex"<<e;
            return 0;
        }
    }
    cout<<"Poor Alex"<<e;

    return 0;
}
