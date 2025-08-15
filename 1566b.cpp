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
  int t; cin>>t;
  while(t--){
    string s; cin>>s;
    int z=count(s.begin(),s.end(),'0');
       if(z==0){
        cout<<0<<e;
       continue;
       }


       int f=s.find('0');
       int l=s.rfind('0');
       if(l-f+1==z)
        cout<<1<<e;
       else
        cout<<2<<e;
  }

    return 0;
}
