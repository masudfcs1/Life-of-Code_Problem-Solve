#include<bits/stdc++.h>
using namespace std;
#define e          "\n"
#define ll         long long int
#define ull        unsigned long long int
#define case(i,n)  cut<<"Case "<<i<<" : "<<n<<endl;
#define fast()     ios_base::sync_with_stdio(false);cin.tie(NULL);
void solve()
{
	#ifndef ONLINE_JUDGE
	     freopen("input.txt","r",stdin);
	     freopen("output.txt","w",stdout);
	#endif

}

int main()
{
	solve();  ll n; cin>>n;
    if(n%5==0||n%6==0){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


    return 0;
}

