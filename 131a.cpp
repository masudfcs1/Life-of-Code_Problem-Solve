#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string solv(string s){
		string tmp=s;
	if(s[0]>='A'&&s[0]<='Z'){
		s[0]=s[0]+32;
	}
	else{
    	s[0]=s[0]-32;		
	}
	for(int i=1;s[i]!='\0';i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]=s[i]+32;
		}
		else{
		  return tmp;			
		}

	}
	return s;
}

int main()
{
	string s;  cin>>s;
	cout<<solv(s);
	
    return 0;
}

