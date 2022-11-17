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
    vector<ll> v;
    ll cnt = 0;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
        if (d == 0)
            cnt++;
    }
    if ((n - cnt) % 2)
    {
        cout << -1 << "\n";
        return;
    }
    vector<pair<ll, ll>> res;
    cnt = 0;
    ll prev;
    ll p = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] == 0 && cnt == 0)
            res.pb({i + 1, i + 1});
        else if (v[i] == 0)
        {
            p++;
            continue;
        }
        else if (cnt == 0)
        {
            prev = i;
            cnt++;
        }
        else
        {
            cnt = 0;
            if (v[prev] != v[i])
            {
                res.pb({prev + 1, i});
                res.pb({i + 1, i + 1});
            }
            else if (v[prev] == v[i] && p == 0)
                res.pb({prev + 1, i + 1});
            else
            {
                res.pb({prev + 1, i - 1});
                res.pb({i, i + 1});
            }
            p = 0;
        }
    }
    cout << res.size() << "\n";
    for (auto x : res)
        cout << x.F << " " << x.S << "\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" <<i<< ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
