
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0); 
    ll tc;  cin>>tc;
    while(tc--)
     {
        int a,b;
        cin>>a>>b;
        cout<<ceil((b-a)/8.0)<<endl;
     }
}