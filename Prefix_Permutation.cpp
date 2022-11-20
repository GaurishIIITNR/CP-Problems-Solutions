/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 21-02-2022**** //
                            // ******TIME:20:07:03****** //
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
      ll a,b;
      cin>>a>>b;
      ll k=1,d;
      for(ll i=0;i<b;i++){
      cin>>d;
      for(ll j=d;j>=k;j--)
      cout<<j<<" ";
      k=d+1;   
      }
      cout<<"\n";
    }
}

