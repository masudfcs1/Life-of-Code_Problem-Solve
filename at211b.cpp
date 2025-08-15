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
	string s1,s2,s3,s4; cin>>s1>>s2>>s3>>s4;
	
	if(s1!=s2&& s1!=s3&& s1!=s4&& s2!=s3&& s2!=s4&& s3!=s4)
	   cout<<"Yes"<<e;
	else
	   cout<<"No"<<e;


    return 0;
}


