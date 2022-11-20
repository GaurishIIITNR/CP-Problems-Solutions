#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
   //cin>>t;

    while(t--) 
    {
      ll a,b,c;
      cin>>a>>b>>c;
      ll mul=1;
      for(ll i=a;i<=b;i++)
      mul=(mul%c)*(i%c);
      cout<<(mul%c);
    }
}
