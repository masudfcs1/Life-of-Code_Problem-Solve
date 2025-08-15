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
    int n; cin>>n;
    vector<ll>a(n);
    for( int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans=0,j=0;
    for( int i=0;i<n;i++){
        while(j<n&&a[j]-a[i]<=5){
            j++;
            ans=max(ans,j-i);
        }
    }
    cout<<ans<<e;

    return 0;
}
