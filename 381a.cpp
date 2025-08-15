#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int n; cin>>n;

        int a[n];
        for(int i=0;i<n;i++)
           cin>>a[i];

        sort(a,a+n);
        int c1=0,c2=0;

        for(int i=1;i<=n;i++){
            if(i&1){
                c1+=i;
            }
            else
            {
                c2+=i;
            }
        }


       if(c1%2==0&&c2%2==0)
           cout<<c1<<" "<<c2<<e;
       else if(c2%2!=0||c1%2!=0)
           cout<<c2<<" "<<c1<<e;



    return 0;
}
