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
  	int c,cum; cin>>c>>cum;
  	int x=cum/c;
  	int m=cum%c;int sum=0;
  	sum+=x*x*(c-m);
  	sum+=m*(x+1)*(x+1);
  	cout<<sum<<e;
  }


    return 0;
}


