#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;int size;
    set<string> st;
 
    int id = -1, mx = -1;
    for(int i = 0; i < n; i++){
       int size = st.size();
        string s;
        cin >> s;
        int t;
        cin >> t;
 
        st.insert(s);
        if(st.size() > size){
            if(t > mx){
                mx = t;
                id = i + 1;
            }
        }cout << id <<" "<< endl;
    }
    
    return 0;
}
