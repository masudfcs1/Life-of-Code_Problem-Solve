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
    int a[n+n];
    for(int i=0;i<n+n;i++)
         cin>>a[i];


    sort(a,a+n+n);
    if(a[0]!=a[n+n-1])
        for(int i=0;i<n+n;i++)
          cout<<a[i]<<' ';
    else
        cout<<-1;
    cout<<e;

    return 0;
}
