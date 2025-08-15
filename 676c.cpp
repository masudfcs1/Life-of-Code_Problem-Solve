#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,k;
string s;
void solve()
{
    cin>>n>>k;
    cin>>s;
    int ans=0,i,j,sa=0,sb=0;
    int l=0,r;
    for(int i=0;i<n;i++){
        if(s[i]=='a') sa++;
        if(s[i]=='b') sb++;
        while(sa>k && sb>k){
            if(s[l]=='a') sa-=1;
            if(s[l]=='b') sb-=1;
            l++;
        }
        if(sa<=k||sb<=k){
            ans=max(ans,i-l+1);
        }
    }
    cout<<ans<<e;

}
signed main()
{
    solve();


    return 0;
}
