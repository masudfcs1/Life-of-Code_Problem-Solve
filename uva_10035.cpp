#include<bits/stdc++.h>
using namespace std;

#define e        "\n"
#define ll       long long int
#define fr(i,n)  for(int i=0;i<n;i++)
#define pct(i,n) cout<<"Case "<<i<<": "<<n<<endl;
#define fast()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    ll  a,b;
    while(cin>>a>>b){
        int carry=0,cnt=0;

        if(a==0&&b==0){
            break;
        }
        while(a||b){
            carry=(a%10+b%10+carry)/10;
            a/=10;
            b/=10;
            if(carry){
                 cnt++;
            }
        }
        if(cnt==0)
            cout<<"No carry operation."<<e;
        else
            cout<<cnt<<" carry operation."<<e;
    }


    return 0;
}

