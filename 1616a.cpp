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
  int t; cin>>t;
  int a[100]; 
  while(t--){
  	int n; cin>>n;int cnt=1;
  	for(int i=0;i<n;i++){
  	    cin>>a[i];
  	    if(a[i]!=a[i+1]){
  	    	cnt++;
		  }
    }
    cout<<cnt<<e;
  }


    return 0;
}


