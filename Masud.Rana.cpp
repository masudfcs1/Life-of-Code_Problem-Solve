#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back()
#define pb         push_back()
#define ll         long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){ 
       char a[10]; 
 	int flag, i=1; 
 	
	 printf("\nEnter an Identifier: "); 
 	 gets(a); 
	
	 if(isalpha(a[0])){ 
 		flag=1; 
 	} 
 
 	else{ 
		 printf("\nNot a valid identifier."); 
    } 
 
 	while(a[i]!='\0'){ 
 		if(!isdigit(a[i])&&!isalpha(a[i])){ 
 		flag=0; 
		 break; 
 	} 
 	
	 i++; 
  } 
  
   if(flag==1){ 
 	printf("\nValid identifier."); 
  } 

}

int main()
{
  fast;
  solve();
  
    return 0;
}


