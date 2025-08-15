#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef           vector<int>vi;

int main()
{
  fast;
  int n; cin>>n;
  int a[n],b[n];
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
  double a1=0,b1=0;
  
  for(int i=0;i<n;i++){
  	if(a[i]>b[i]) a1++;
  	else if (a[i]<b[i]) b1++;
  	
  } 
  
  if(a1==b1&&a1==0) cout<<-1<<e;
  else if(a1==0) cout<<-1<<e;
  else 
    cout<<ceil((b1+1)/a1)<<e;


    return 0;
}


