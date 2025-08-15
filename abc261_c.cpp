// Problem: C - NewFolder(1)
// Contest: AtCoder - AtCoder Beginner Contest 261
// URL: https://atcoder.jp/contests/abc261/tasks/abc261_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// //Code Build: masudfps1
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;                 
#define e "\n"
void solve(){
	int n; cin>>n;
	
	unorder_map<string,int>frq;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(frq.find(s)==frq.end()){
			frq[s]=0;
			cout<<ss<<e;
		}
		else frq[s]=frq.at(s)+1;
		cout<<ss<<"("<<frq.at(s)<<")"<<e;
	}
}

int main()
{
   solve();

    return 0;
}