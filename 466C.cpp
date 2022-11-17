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
    ll sm = 0;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
        sm += d;
    }
    ll r = 0, r1 = 0, r2 = 0, sm1 = 0;
    if (sm % 3)
    {
        cout << 0 << "\n";
        return;
    }
    if (sm == 0)
    {
        ll cnt = 0;
        for (auto x : v)
        {
            sm1 += x;
            if (sm1 == 0)
                cnt++;
        }
        cout << ((cnt - 1) * (cnt - 2)) / 2 << "\n";
        return;
    }
    ll res = 0;
    for (auto x : v)
    {
        sm1 += x;
        if (sm1 == sm / 3)
            r++;
        else if (sm1 == (2 * sm) / 3)
            res += r;
    }
    cout << res << "\n";
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
