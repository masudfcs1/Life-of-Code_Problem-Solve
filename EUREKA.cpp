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
  int t; cin>>t;
  while(t--){
  	float n; cin>>n;
  	float x=(0.143*n);
  	int z=pow(x,n);
  	
  	if(z>0) cout<<z+1<<e;
  	else cout<<0<<e;
  }


    return 0;
}


