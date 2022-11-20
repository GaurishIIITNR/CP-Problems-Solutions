/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 14-02-2022**** //
                            // ******TIME:09:11:20****** //
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
    ll sm = 0;
    vector<ll> v(t);
    for (ll i = 0; i < t; i++)
    {
        cin >> v[i];
        sm += v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    ll cnt = 0, smm = 0;
    for (ll i = 0; i < t; i++)
    {
        smm += v[i];
        if (smm <= sm / 2)
            cnt += 1;
        else
        {
            cnt += 1;
            break;-
        }
    }
    cout << cnt;
}
