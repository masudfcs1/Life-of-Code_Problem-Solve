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
    long int n,x;
    while(t--){
        cin>>n>>x;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        int sum=1,ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]*sum>=x){
                ans++,sum=1;
            }
            else
                sum++;
        }
        cout<<ans<<e;
    }

    return 0;
}
