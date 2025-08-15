#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i,n)  cout<<"Case "<<i<<": "<<n<<endl;
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a;
        bool f=false;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a<0) f=true;
        }
        if(f){
            cout<<"NO"<<e;
        }
        else{
                cout<<"Yes"<<e;
            cout<<101<<e;
          for(int i=0;i<=100;i++){
            cout<<i<<" ";

          }
        }
    }


    return 0;
}
