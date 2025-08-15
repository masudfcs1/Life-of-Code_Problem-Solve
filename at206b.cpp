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
	int cnt=0;
	for(int i=1;;i++){
		cnt+=i;
      if(cnt>=n){
      	cout<<i<<e;
      	return 0;
	  }
	}



    return 0;
}


