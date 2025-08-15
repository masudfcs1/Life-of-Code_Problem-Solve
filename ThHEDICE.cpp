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
	int t; cin>>t;
	while(t--){
		int x,y; cin>>x>>y;
		int a=2*x, b=2*y;
		if(a%b==0){
		 cout<<0<<e;	
		}
		else  cout<<fixed(6)<<setprecision()<<(2*x/2*y)<<e;
	}


    return 0;
}


