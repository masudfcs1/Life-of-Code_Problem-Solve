// Problem: H. Two numbers
// Contest: Codeforces - Sheet #1 (Data type - Conditions)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// //Code Build: masudfps1
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

void solve(){
	double a,b; cin>>a>>b;
	
	cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<"\n";
	cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<"\n";
	cout<<"round "<<a<<" / "<<b<<" = "<<round(a/b)<<"\n";
	
}

int main()
{
  
   solve();

    return 0;
}