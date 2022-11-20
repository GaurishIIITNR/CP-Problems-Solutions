/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 14-02-2022**** //
                            // ******TIME:15:09:18****** //
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
        ll a, b;
        cin >> a >> b;
        char arr[a][b];
        vector<ll> v(1000, 0);
        for (ll i = 0; i < a; i++)
            for (ll j = 0; j < b; j++)
                cin >> arr[i][j];

        for (ll j = 0; j < b; j++)
        {
            ll mx = INT_MIN;
            for (ll i = 0; i < a; i++)
            {
                if (mx <= (ll)(arr[i][j] - '0'))
                    mx = (ll)(arr[i][j] - '0');
            }
            for (ll i = 0; i < a; i++)
            {
                if ((ll)(arr[i][j] - '0') == mx)
                    v[i + 1] = 1;
            }
        }
        ll sm = 0;
        for (ll i = 0; i < 1000; i++)
            sm += v[i];
        cout << sm;
    }
}
