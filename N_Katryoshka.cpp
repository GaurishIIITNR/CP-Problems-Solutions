/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 14-02-2022**** //
                            // ******TIME:16:04:32****** //
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
    //cin>>t;
     
    while(t--) 
    {
      ll a,b,c;
      cin>>a>>b>>c;
      ll d=min(a,b);
         d=min(d,c);
    if(a==d || c==d)
    cout<<d;
    else
    cout<<d+min((a-d)/2,(c-d));
    }
}
