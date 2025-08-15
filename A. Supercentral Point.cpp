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

void solve(){
	
	int t; cin>>t;
	int x[t],y[t];
	for(int i=0;i<t;i++) cin>>x[i]>>y[i];
	int cnt=0;
	
	for(int i=0;i<t;i++){
		int r=0,l=0,lo=0,u=0;
		for(int j=0;j<t;j++){
			if(x[j]>x[i] and y[j]==y[i]) r++;
			if(x[j]<x[i] and y[j]==y[i]) l++;
			if(x[j]==x[i] and y[j]<y[i]) lo++;
			if(x[j]==x[i] and y[j]>y[i]) u++;
		}
			
	if(r>0 and l>0 and lo>0 and u>0) cnt++;
		
	}

	
	cout<<cnt<<e;
        

}

int main()
{
  
   solve();

    return 0;
}

