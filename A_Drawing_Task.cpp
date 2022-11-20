/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 13-02-2022**** //
                            // ******TIME:09:28:24****** //
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
        ll a, b, c;
        cin >> a >> b >> c;
        char arr[a][b];
        for (ll i = 0; i < a; i++)
            for (ll j = 0; j < b; j++)
                arr[i][j] = '.';
        while (c--)
        {
            ll d, e, f, g;
            char h;
            cin >> d >> e >> f >> g >> h;
            if(d>f)
            swap(d,f);
            if(e>g)
            swap(e,g);
            for (ll i = d - 1; i < f; i++)
                for (ll j = e - 1; j < g; j++)
                    arr[i][j] = h;
        }
        for (ll i = 0; i < a; i++)
        {
            for (ll j = 0; j < b; j++)
                cout << arr[i][j];
            if (i != a - 1)
                cout << "\n";
        }
    }
}
