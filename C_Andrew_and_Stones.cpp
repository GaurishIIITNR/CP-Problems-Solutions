//===================================================================================//
//      हर हर महादेव🙏🙏   //
//    AUTHOR: GAURISH OJHA //
//     DATE: 12-02-2022    //
//      TIME:21:02:43      //
//===================================================================================//

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
        ll cnt = 0;
        ll ans = 0;
        ll ocnt=0;
        ll ecnt=0;
        ll arr[a];
        for (ll i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (i != 0 && i != a - 1)
            {
                if (arr[i] % 2 != 0)
                {
                    cnt -= 1;
                    ans += ((arr[i] + 1) / 2);
                }
                else
                {
                    cnt += (arr[i] / 2);
                    ans += (arr[i] / 2);
                }
            }
        }
        if (cnt >= 0)
            cout << ans << "\n";
        else
            cout << -<< "\n";
    }
}
