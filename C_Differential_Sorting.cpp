/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 20-02-2022**** //
                            // ******TIME:21:21:39****** //
========================================================================================
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll a;
        cin >> a;
        vector<ll> v(a);
        vector<ll> b(a);
        //'vector<ll> c(a);
        for (ll i = 0; i < a; i++)
        {
            cin >> v[i];
            b[i] = v[i];
        }
        ll cnt=0;
        sort(b.begin(),b.end());
        //c=b;
        //reverse(c.begin(),c.end());
          if(v==b)
          cout<<0<<"\n";
          else
          {
             
          }     
    }
}
