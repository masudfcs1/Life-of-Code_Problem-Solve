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
    long int n,k;  cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    if(k==n)
        cout<<a[n-1];
    else if(k==0)
    {
        if(a[0]==1)
            cout<<-1;
        else
            cout<<1;
    }
    else {
        int u=a[k-1];
        if(u==a[k])
            cout<<-1;
        else
            cout<<u;
    }

    return 0;
}
