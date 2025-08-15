#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int n,k;
int main()
{
    	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

     cin>>n>>k;
    int sum=0; int a;
    for(int i=0;i<n;i++){
        cin>>a;
       sum+=a-min(3,a/k)*k;
    }
    cout<<sum<<e;

    return 0;
}
