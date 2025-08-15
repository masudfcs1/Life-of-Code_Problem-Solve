#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 int t;
int main()
{
    cin>>t;
    while(t--){
    int a[3],d; cin>>a[0]>>a[1]>>a[2]>>d;
        if(a[0]-1+a[1]-1+a[2]-1<d){
            cout<<"NO"<<e;
            continue;
        }
        sort(a,a+3);
        if(a[2]-a[0]-a[1]-1>d){
            cout<<"NO"<<e;
            continue;
        }
        cout<<"YES"<<e;
    }

    return 0;
}
