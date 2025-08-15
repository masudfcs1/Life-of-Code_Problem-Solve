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
	ll n,k; cin>>n>>k;
	 for(int i=1;i<=k;i++){
	 	if(n%200==0){
	 		n/=200;
		 }
		 else if(n%200!=0){
		 	n=n*1000+200;
		 }
	 }
           cout<<n<<e;

    return 0;
}


