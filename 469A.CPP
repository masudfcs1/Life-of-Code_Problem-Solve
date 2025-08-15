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
  int a[n+1]={0};
  int l; int p,q; cin>>p;
  for(int i=0;i<p;i++){
  	cin>>l;
  	a[l]=1;
  }
  
  cin>>q;
  for(int i=0;i<q;i++){
  	cin>>l;
  	a[l]=1;
  }
   
   for(int i=1;i<=n;i++){
   	 if(a[i]==0){
   	 	cout<<"Oh, my keyboard!"<<e;
   	 	return 0;
		}
   }
   cout<<"I become the guy."<<e;
    return 0;
}
