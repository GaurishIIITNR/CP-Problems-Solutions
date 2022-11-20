#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
   // cin>>t;

    while(t--) 
    {
       ll a,b,c;
       cin>>a>>b>>c;
    
    int k=c%3;
    if(k==0)
      cout<<(a^b);
    else if(k==1)
    cout<<a;
    else
    cout<<b;  

    }
}
