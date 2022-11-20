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
      ll a;
      cin>>a;
     
     ll noofbits=log2(a)+1;

     ll pw=pow(2,noofbits)+a;

      cout<<0<<" "<<a<<" "<<pw<<"\n";
     // cout<<((0|a)&(a|pw)&(pw|0))<<"\n";
    }
}
