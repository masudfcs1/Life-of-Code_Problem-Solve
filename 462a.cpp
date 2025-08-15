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
	string s,s1,temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		s1+=temp;
	}
	
	s=s1;
	reverse(s.begin(),s.end());
if(s==s1){
	cout<<"YES"<<e;
 }
else
  cout<<"NO"<<e;
	

	



    return 0;
}


