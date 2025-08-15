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
    int n,v; cin>>n>>v;
    int k,s; vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>k;

       bool u=false;
       fr(j,k){
        cin>>s;
        if(!u && v>s){
            u=true;
           ans.push_back(i);
        }
       }

       }
       cout<<ans.size()<<e;
       fr(i,ans.size()){
        cout<<ans[i]+1<<" ";
    }

    return 0;
}
