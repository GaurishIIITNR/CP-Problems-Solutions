/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 20-02-2022**** //
                            // ******TIME:20:33:57****** //
========================================================================================
*/
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
       vector<ll>v(a);
       for(ll i=0; i<a; i++)
       cin>>v[i];
       ll cnt=0;
       for(ll i=1; i<a-1; i++)
       {
           if(v[i]>v[i-1] && v[i]>v[i+1])
        {
          if(v[i+2]>v[i+1] && v[i+2]>v[i+3] && i<=a-3)
          v[i+1]=max(v[i+2],v[i]);
          else
          v[i+1]=v[i];
          cnt++;}
       }
       cout<<cnt<<"\n";
       for(ll i=0; i<a; i++)
       cout<<v[i]<<" ";
       cout<<"\n";  
    }
}
