#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string solve(string &s){
	int cnt1=1,cnt2=0; bool flag=false;
	for(int i=0;i<s.size();i++)
    {
    	if(s[i]==s[i+1]){
    		cnt1++;
    		if(cnt1==7){
		 return "YES";
		 break;
		}
		}
		
		else{
			cnt1=1;
		}
	
		
	}
		return "NO";
}
int main()
{
	string s; cin>>s;
	  cout<<solve(s)<<e;

    return 0;
}


