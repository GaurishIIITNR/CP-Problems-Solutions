/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 13-02-2022**** //
                            // ******TIME:22:13:16****** //
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
        if (a < b)
            cout << -1;
        else if (a == b)
            cout << b;
        else
        {
            ll mx = a, mn;
            a % 2 == 0 ? mn = a / 2 : mn = (a + 1) / 2;
            bool flag = 1;
            for (ll i = mn; i <= mx; i++)
            {
                if (i % b == 0)
                {
                    cout << i;
                    flag = 0;
                    break;
                }
            }
            if (flag)
                cout << -1;
        }
    }
}
