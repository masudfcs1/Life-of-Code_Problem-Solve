#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int s[1011];
int main()
{
  fast;
 int n,k; cin>>n>>k;
 int a,ans=0;
 for(int i=0;i<n;i++){
 	cin>>a;
 	s[a]++;
 }
 
 for(int l=1;l<=k;l++){
 	if(s[l]&1) ans++;
 }
 ans/=2;
 
 cout<<n-ans<<e;
  


    return 0;
}


