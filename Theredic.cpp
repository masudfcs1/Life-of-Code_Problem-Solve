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
	int n; cin>>n;
	while(n--){
		int a,b; cin>>a>>b;
		int ans=a+b;
		if(ans>6) cout<<0<<e;
		else
		  cout<<setprecision(6)<<float(float(6-ans)/float(6))<<e;
	}


    return 0;
}


