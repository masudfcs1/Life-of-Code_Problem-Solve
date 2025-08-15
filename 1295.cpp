#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{

     int t; cin>>t;
     while(t--){
        int n; cin>>n;
         if(n%2==0){
              cout<<1;
         for(int i=0;i<n/2;i++)
         cout<<"1";
        }
        else
        {
            cout<<"7";
            for(int i=0;i<n/2-1;i++){
                cout<<"1";
            }
        }
        cout<<e;
     }


    return 0;
}
