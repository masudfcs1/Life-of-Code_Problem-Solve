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
            string s;
        long int k,n,m; cin>>n>>m>>s;
        vector<int>a(26),b(n);
        for(int i=0;i<m;i++){
            cin>>k;
            b[k-1]++;
        }
       int j=1;
       for(int i=n;i>0;i--){
        j+=b[i-1];
        a[int(s[i-1])-97]+=j;
       }
       for(auto x: a)
        cout<<x<<' ';
       cout<<e;
    }


    return 0;
}
