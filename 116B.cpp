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
	fast;
	int n,m; cin>>n>>m;
	int cnt=0; string a[100];
	for(int i=1;i<=n;i++){
		  cin>>a[i];
		}
	
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++){
			 if(a[i][j]=='W'&&(a[i-1][j]=='P'||a[i+1][j]=='P'||a[i][j-1]=='P'||a[i][j+1]=='P')){
			
			 		cnt++;
				 
			 }
		}
	}
	cout<<cnt<<e;


    return 0;
}


