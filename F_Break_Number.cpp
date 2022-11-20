#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll mx=INT_MIN;
    while(t--) 
    {
        ll a;
       cin>>a;
       ll cnt=0;
       ll i=a;
       while(1)
       {
           if(i%2==0)
           cnt+=1;
           else
           break;
           i=i/2;
       }
       if(mx<cnt)
       mx=cnt;
    }
    cout<<mx;
}
