/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 14-02-2022**** //
                            // ******TIME:20:37:59****** //
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
      ll n;
      cin>>n;
      vector<ll> v(n);
      vector<ll> b;
      for(ll i=0; i<n; i++)
        cin>>v[i];
        if(n==1)
        {
            cout<<v[0]<<"\n";
            continue;
        }
        
        b=v;
        
      sort(b.begin(),b.end());
      ll k=0,ind=-1,ji=-1;
      for(ll i=0; i<n; i++)
      {
          if(v[i]!=b[i])
          {
              k=b[i];
              ji=i;
              break;

          }
      }
      for(ll i=0; i<n; i++)
      {
          if(v[i]==k)
             ind=i;
      }
      //cout<<ji<<" "<<ind<<"\n";
      if(ji!=-1 && ind!=-1) {
       
       reverse(v.begin()+ji ,v.begin()+ind+1);
      }
       for(ll i=0; i<n; i++)
      cout<<v[i]<<" ";
      cout<<"\n";

    }
}
