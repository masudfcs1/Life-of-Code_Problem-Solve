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
    string  s; cin>>s;
    s="00"+s;
   int n=s.size();
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            int b;
            b=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0')*1;
            if(b%8==0){
                cout<<"YES"<<e;
                cout<<b<<e;
                return 0;
            }
        }
    }
   }
   cout<<"NO"<<e;

    return 0;
}
