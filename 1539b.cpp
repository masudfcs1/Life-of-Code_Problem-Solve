#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef           vector<int>vi;
const int N = 1e5 + 5;
 
int a[N];
 
signed main(){
	int n, q;
	cin >> n >> q;
	
	for (int i=1; i<=n; i++){
		char c;
		cin >> c;
		
		a[i] = c - 96;
	}
	
	for (int i=1; i<=n; i++){
		cout<<a[i];
	}
	
	
	
}


