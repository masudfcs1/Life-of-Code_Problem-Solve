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
    fast;
    int t; cin>>t;

    while(t--){
       int n; cin>>n;
       vector<int>a(n);
       int cnt1=0,cnt2=0;
       for(int i=0;i<n;i++)
           cin>>a[i];

        for(int i=0;i<n;i++){
            if(a[i]%2==0 && i%2==1){
                cnt1++;
            }
            else if(a[i]%2==1&& i%2==0){
                cnt2++;
            }
        }
          if((cnt1==0)&&(cnt2==0)){
            cout<<0<<e;
          }
          else
          {
              if(cnt1==cnt2){
                cout<<cnt1<<e;
              }
              else
                cout<<-1<<e;
          }

    }


    return 0;
}
