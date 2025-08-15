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
	
	string str;
int len,check=0,i;
cin>>str;
len=str.size();
printf("Number: ");
for(i=0; i<=len; i++)
{
if((str[i]>=48) && (str[i]<=57))
{
printf("%c ",str[i]);
}
}
printf("\nOperators: ");
for(i=0; i<=len; i++)
{
if((str[i]==42)||(str[i]==43)||(str[i]==45)||(str[i]==47))
{
printf("%c ",str[i]);
}
}
printf("\nIdentifier: ");
for(i=0; i<=len; i++)
{
if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
{
printf("%c ",str[i]);
}
else if(str[i]==59)
{
printf("\nEnd of sentence : ;");
}
}



}

int main()
{
  fast;
  solve();
  
    return 0;
}


