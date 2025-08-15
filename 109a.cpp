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
	for(int i=0;i<n/4+2;i++){
		int a=n-(4*i);
		if(a>=0){
			if(a%7==0){
				for(int x=0;x<i;x++)
				   cout<<4;
				for(int y=0;y<a/7;y++)
				   cout<<7;
				   return 0;
			}
		}
		else{
			break;
		}
	}
	cout<<-1<<e;


    return 0;
}


