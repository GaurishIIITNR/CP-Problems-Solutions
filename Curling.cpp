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
dbl eql(ll x, ll y)
{
    return (dbl)sqrt((dbl)(x * x) + (dbl)(y * y));
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n >> k;
    ll q1, q2;
    cin >> q1;
    ll cnt = 0;
    dbl mn = 1e+5, mn1 = 1e+5;
    vector<pair<ll, ll>> r, b;
    while (q1--)
    {
        ll x, y;
        cin >> x >> y;
        if (eql(x, y) - (dbl)n <= (dbl)k)
        {
            cnt++;
            mn = min(mn, eql(x, y));
            r.pb({x, y});
        }
    }
    ll cnt1 = 0;
    cin >> q2;
    ll c = q2;
    while (q2--)
    {
        ll x, y;
        cin >> x >> y;
        if (eql(x, y) - (dbl)n <= (dbl)k)
        {
            cnt1++;
            mn1 = min(mn1, eql(x, y));
            b.pb({x, y});
        }
    }
    if (c == 0)
    {
        cout << cnt << " " << 0 << "\n";
        return;
    }
    else
    {
        cnt = 0, cnt1 = 0;
        if (mn1 > mn)
        {
            for (auto x : r)
            {
                if (eql(x.F, x.S) < mn1)
                    cnt++;
            }
            cout << cnt << " " << 0 << "\n";
        }
        else
        {
            for (auto x : b)
            {
                if (eql(x.F, x.S) < mn)
                    cnt1++;
            }
            cout << 0 << " " << cnt1 << "\n";
        }
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
