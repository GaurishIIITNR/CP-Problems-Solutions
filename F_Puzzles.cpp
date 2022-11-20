/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 13-02-2022**** //
                            // ******TIME:17:36:31****** //
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
        vector<ll> v(b);
        for (ll i = 0; i < b; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        ll ans = INT_MAX;
        for (ll i = 0; i < b - a + 1; i++)
        {
            if (v[i + a - 1] - v[i] < ans)
                ans = v[i + a - 1] - v[i];
        }
        cout << ans;
    }
}
