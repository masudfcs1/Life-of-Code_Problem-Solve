#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i,n)  cout<<"Case "<<i<<": "<<n<<endl;
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; char a[11];
    cin>>t;
    while(t--){
            cin>>a;
        int l=strlen(a);
        sort(a,a+l);
        do{

            cout<<a;
            cout<<e;
        }
        while(next_permutation(a,a+l));
        cout<<e;
    }


    return 0;
}
