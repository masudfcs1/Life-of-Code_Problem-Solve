#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>a(n);
        for( int i=0;i<n;i++)
             cin>>a[i];


         int flag=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+2;j<n;j++){
                if(a[i]==a[j])
                    flag=1;
            }
        }

        if(flag==1)
             cout<<"YES"<<e;
        else
            cout<<"NO"<<e;
    }

    return 0;
}
