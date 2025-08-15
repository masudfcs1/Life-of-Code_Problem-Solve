#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string s={'a','b','c','d'};
    for (int i = 0; i < n; i++) {
        cout<<s[i%4];
 
    }
 
 
    return 0;
}
