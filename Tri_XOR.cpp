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
ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v(n,0);
    vin(v, n);
    vector<vector<ll>> res;
    while (1)
    {
        for (i = 0; i < n - 2; i++)
        {
            ll a = (v[i] ^ v[i + 1]);
            ll b = (v[i + 2] ^ v[i + 1]);
            ll c = (v[i] ^ v[i + 2]);
            res.pb({v[i], v[i + 1], v[i + 2]});
            v[i] = a, v[i + 1] = b, v[i + 2] = c;
        }
        ll cnt = 0;
        for (i = 0; i < n; i++)
        {
            if (v[i] == 0)
                cnt++;
        }
        if (cnt == n)
            break;
    }
    cout << res.size() << "\n";
    for (i = 0; i < res.size(); i++)
        cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << "\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" << t << ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
