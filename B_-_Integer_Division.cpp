/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 19-02-2022**** //
                            // ******TIME:17:35:52****** //
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
   // cin>>t;
     
    while(t--) 
    {
       ll a;
       cin>>a;
      // cout<<(a/10.0)<<" ";
      //double c=(double)a/10.0;
      if(a>0)
      cout<<a/10;
      else
      {
          string s=to_string(a);
          if(s[s.length()-1]=='0')
          cout<<a/10;
          else
          cout<<(a/10)-1;
      }
      //cout<<c<<" ";
      // ll d=floor(c);
      
    }
}
