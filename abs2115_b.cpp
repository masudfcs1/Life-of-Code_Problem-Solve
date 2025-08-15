#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N=10e18+1;
int main()
{
	ul n; cin>>n;
	/*for(ul i=1;i<N;i++){
		if(pow(2,i)>=n){
			cout<<i-1<<e;
			return 0;
		}
	}
	*/
	cout<<(ul)log2((long double)n)<<e;


    return 0;
}

