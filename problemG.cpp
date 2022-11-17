// हर हर महादेव
#define F first
#define S second
#define dbl double
using namespace std;
#define pb push_back
#define vin(name, size)        \
    for (i = 0; i < size; i++) \
    cin >> name[i]
#define vout(name)                    \
    for (i = 0; i < name.size(); i++) \
        cout << name[i] << " ";       \
    cout << endl
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
#define part(x, a, b) x.begin() + a, x.begin() + b
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
void HHM()
{
    ll i, j, k;
    ll n, m, q;
    cin >> n >> m >> q;
    ll a[n][m];
    ll res[n][m];
    memset(res, 0, sizeof(res));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < m; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }
    while (q--)
    {
        ll d1, d2;
        cin >> d1 >> d2;
        d1--;
        d2--;
        for (i = 0; i < n; i++)
        {
            if (i == d1)
                continue;
            else
            {
                if (a[i][d2] == 1)
                    res[i][d2]++;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        ll p = 0;
        for (j = 0; j < m; j++)
        {
            p += res[i][j];
        }
        cout << p << " ";
    }
    cout << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    // cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" <<i<< ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
