#include<bits/stdc++.h>
using namespace std;


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
  	int x1,p1,x2,p2; cin>>x1>>p1>>x2>>p2;
  	double x=log10(1.0*x1/x2)+(p1-p2);
  	if(x>0)cout<<">"<<endl;
  	else if(x==0) cout<<"="<<endl;
  	else cout<<"<"<<endl;
  }


    return 0;
}


