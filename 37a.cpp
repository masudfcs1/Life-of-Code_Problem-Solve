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
    int t; cin>>t;    int n[1001];
    for(int i=0;i<t;i++){
     cin>>n[i];
    }
    sort(n,n+t);
    int sum=1,d=1,c=1;
   for(int i=0;i<t-1;i++){
        if(n[i+1]==n[i])
            c++;
        else{
         d++;
        c=1;
        }
        if(c>sum)
            sum=c;
    }

    cout<<sum<<" "<<d<<e;




    return 0;
}
