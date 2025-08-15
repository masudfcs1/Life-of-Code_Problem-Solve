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
	int t;cin>>t;
   while(t--){
   	int n; cin>>n;
   	int cnt=0;
   	int a[n];
   	for(int i=0;i<n;i++){
   		cin>>a[i];
   		cnt+=a[i];
	   }
	   if(cnt%n==0){
	   	cout<<0<<e;
	   }
	   else
	    cout<<1<<e;
   }


    return 0;
}


