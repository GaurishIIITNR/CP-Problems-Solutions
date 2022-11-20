/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 15-02-2022**** //
                            // ******TIME:21:35:10****** //
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

    for (ll l = 1; l <= t; l++)
    {
        cout << "Case #" << l << ": ";
        ll a;
        cin >> a;
        ll t=1;
        for (ll i = 0; i < a; i++)
           {ll b; cin >>b;
            if()

           }
        for (ll i = 0; i < a; i++)
        {
            ll k = i;

            while (1)
            {
                ll flag = 1;
                ll cnt = 0;
                for (ll j = i; j >= 0; j--)
                {
                    if (v[j] >= k + 1)
                        cnt += 1;
                    if (cnt == k + 1)
                    {
                        cout << cnt << " ";
                        flag = 0;
                        break;
                    }
                }
                if (flag == 0)
                    break;
                else
                    k--;
            }
        }
        cout << "\n";
    }
}
