/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 14-02-2022**** //
                            // ******TIME:10:45:42****** //
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
    // cin>>t;

    while (t--)
    {
        ll a;
        cin >> a;
        vector<ll> v(a);
        for (ll i = 0; i < a; i++)
            cin >> v[i];
        for (ll i = 0; i < a; i++)
        {
            cout << min(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1])) << " ";
            cout << max(abs(v[i] - v[0]), abs(v[i] - v[a - 1])) << "\n";
        }
    }
}
