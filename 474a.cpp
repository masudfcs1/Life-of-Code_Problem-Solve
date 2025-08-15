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
 char dir; cin>>dir;
 string s; cin>>s;
 string k1="qwertyuiop";
 string k2="asdfghjkl;";
 string k3="zxcvbnm,./";
 if(dir=='R'){
 	for(int i=0;i<s.size();i++){
 		size_t f1=k1.find(s[i]);
 		size_t f2=k2.find(s[i]);
 		size_t f3=k3.find(s[i]);
 		
 		if(f1<=9) cout<<k1[f1-1];
 		else if(f2<=9) cout<<k2[f2-1];
 		else if(f3<=9) cout<<k3[f3-1];
	 }
 }
 else {
 	for(int i=0;i<s.size();i++){
	 
 	size_t f1=k1.find(s[i]);
 	size_t f2=k2.find(s[i]);
 	size_t f3=k3.find(s[i]);
 	
 	if(f1<=9) cout<<k1[f1+1];
 	else if(f2<=9) cout<<k2[f2+1];
 	else if(f3<=9) cout<<k3[f3+1];
  
 }   
  }
  


    return 0;
}


