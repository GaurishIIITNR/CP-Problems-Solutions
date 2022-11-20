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
      ll a;
      cin>>a;
      ll d;
      if((a+1)%4==0)
        d=(a+1)/4;
        else
        d=((a+1)/4)+1;
       if (d%2==0)
       cout<<(d-1)<<" "<<(3-((a)%4));
       else
       cout<<(d-1)<<" "<<((a)%4);
    }
}
