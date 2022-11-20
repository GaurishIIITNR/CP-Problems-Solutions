//===================================================================================//
//      हर हर महादेव🙏🙏   //
//    AUTHOR: GAURISH OJHA //
//     DATE: 12-02-2022    //
//      TIME:20:08:58      //
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
        vector<ll> v(a);
        vector<ll> y(a);
        for (ll i = 0; i < a; i++)
        {
            cin >> v[i];
            y[i]=v[i];
        }
        sort(v.begin(), v.end());
        ll flag = 1;
        for (ll i = 0; i < a; i++)
        {
            if (v[i] != y[i])
            {
                cout << "YES\n";
                flag = 2;
                break;
            }
        }
        if (flag == 1)
            cout << "NO\n";
    }
}
