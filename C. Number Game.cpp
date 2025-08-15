#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back
#define pb         push_back
#define ll         long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	const int N=50000;
	
	bool checkPrime(int n){
		for(int i=2;i<min(N,n);i++)
			if(n%i==0)
			    return 0;
			    
			
			return 1;
		
	}
	
	void a(){
		cout<<"Ashishgup"<<e;
	}
	
	void b(){
		cout<<"FastestFinger"<<e;
	}


int main()
{
   fast;
   //solve();
   	int t; cin>>t;
   	while(t--){
		int n;  cin>>n;
		bool cont=(n==1);
		if(n>2 and n%2==0){
			if((n & (n-1))==0) cont=1;
			else if(n%4!=0 and checkPrime(n/2)) cont=1;
		}
		
		if(cont) b();
     	else a();
	}
	
	

    return 0;
}

