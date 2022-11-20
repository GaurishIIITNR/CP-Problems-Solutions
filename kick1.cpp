/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 15-02-2022**** //
                            // ******TIME:16:39:49****** //
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
    ll k = 1;
    while (t--)
    {

        ll a, b;
        cin >> a >> b;
        ll sm = 0;
        while (a--)
        {
            ll c;
            cin >> c;
            sm += c;
        }
        cout << "Case #" << k << ": " << (sm % b) << "\n";
        k++;
    }
}
