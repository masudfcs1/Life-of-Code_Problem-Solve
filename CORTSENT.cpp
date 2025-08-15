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
  while(t-->0){
  		int k; cin>>k;int flag=0;
	for(int i=0;i<k;i++){

	string s; cin>>s;
	int cnt1=0,cnt2=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>=97&&s[i]<=109){
			cnt1++;
		}
		else if(s[i]>=78&&s[i]<=90){
			cnt2++;
		}
	}
	if(cnt1!=s.size()&&cnt2!=s.size())
	flag=1;
 }
	if(flag==0) cout<<"YES"<<e;
	else cout<<"NO"<<e;
  }


    return 0;
}


