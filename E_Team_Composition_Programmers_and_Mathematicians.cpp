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
       if(a>=(a+b)/4 && b>=(a+b)/4)
       cout<<(a+b)/4<<"\n";
       else
       cout<<min(a,b)<<"\n";
    }
}
