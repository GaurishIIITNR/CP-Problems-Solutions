/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 16-02-2022**** //
                            // ******TIME:22:35:34****** //
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
     vector<ll>v1;
      vector<ll>v2;
       vector<ll>v3;
    for(ll i=1; i<=t;i++) 
    { ll a;
      cin>>a;
      if(a==1)
      v1.push_back(i);
      else if(a==2)
      v2.push_back(i);
      else
      v3.push_back(i);
    }
    ll mn=min(v1.size(),min(v2.size(),v3.size()));
    cout<<mn<<"\n";
    for(ll i=0;i<mn;i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<"\n";
    }
}
