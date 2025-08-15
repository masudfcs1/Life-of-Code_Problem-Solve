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
  int k,l,m,n,d; cin>>k>>l>>m>>n>>d;
  int cnt=0;
  for(int i=1;i<=d;i++){
  	if(i%k==0 || i%l==0|| i%m==0|| i%n==0){
  		cnt++;
	  }
  }
  
  cout<<cnt<<e;
  

    return 0;
}
