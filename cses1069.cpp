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
	string s;  cin>>s;
//	sort(s.begin(),s.end());
	int cnt=1,sum=1;
	for(int i=0;i<s.size();i++){
		if(s[i+1]==s[i]){
			cnt++;
			sum=max(sum,cnt);
		}
		else if(s[i+1]!=s[i]){
			sum=max(sum,cnt);
			cnt=1;
		}
	
	
	cout<<sum<<e;


    return 0;
}


