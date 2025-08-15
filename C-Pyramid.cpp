// Author: masudfps1


#include<bits/stdc++.h>
using namespace std;

#define e          "\n"

#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
    
    int n; cin>>n;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=i;j++){
    	   cout<<"*";
    	}
    	cout<<e;
    }

}

int main()
{
   fast;
   solve();
   

    return 0;
}
