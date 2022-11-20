#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;

    while(t--) 
    {
      ll a,b;
      cin>>a>>b;
      cout<<(b%(a+1))<<"\n";
    //   if(a>=b)
    //   cout<<b<<"\n";
    //   else
    //      cout<<((b%a)-1)<<"\n"; 
    }
}
