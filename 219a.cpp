#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
array<int,127>a;
int32_t main()
{
    int n,k; cin>>k;
    string s; cin>>s;
    for(char i: s){
        a[i]++;
    }
    for(int i=0;i<s.size();i++){
         cout<<a[i]<<" ";
    }

    return 0;
}
