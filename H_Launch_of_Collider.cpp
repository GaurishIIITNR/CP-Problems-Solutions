/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 14-02-2022**** //
                            // ******TIME:09:32:06****** //
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
    //cout<<t;
    vector<ll> v;
     ll x;
     ll mn = INT_MAX;
   for (ll i = 0; i < t; i++)
     {
       char a;
        cin >> a;
        // cout<<a;
        if (a == 'R')
          x = i;
       else if (i == x + 1 && a == 'L')
       {
            v.push_back(x));
        }
     }
    if (v.size() == 0)
        cout << -1;
    else
    {
        ll temp = 0;
        for (ll i = 0; i < t; i++)
        {
            ll d;
            cin >> d;
            if (i == v[i].first)
                temp += d;
            else if (i == v[i].second)
            {
                if (mn > (temp + d) / 2)
                    mn = (temp + d) / 2;
                temp = 0;
            }
        }
           cout<<mn;
    } 
}
