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
    string s; cin>>s;
    if(s[0]=='o'&&s[1]=='o'&&s[2]=='o'&&s[3]=='o'&&s[4]=='o'&&s[5]=='o'&&s[6]=='o'&&s[7]=='o')
        cout<<"Yes"<<e;
    else
        cout<<"No"<<e;

    return 0;
}
