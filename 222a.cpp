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
    string n; cin>>n;
    int t=n.size();
    if(t==1)
        cout<<0<<0<<0<<n<<e;
    else if(t==2)
        cout<<0<<0<<n<<e;
    else if(t==3)
        cout<<0<<n<<e;
    else
        cout<<n<<e;

    return 0;
}
