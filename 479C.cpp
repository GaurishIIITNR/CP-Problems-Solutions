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
bool sor(pair<ll, ll> &p1, pair<ll, ll> &p2)
{
    if (p1.F == p2.F)
        return p1.S <= p2.S;
    return p1.F < p2.F;
}

void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<pair<ll, ll>> vp;
    ll n1 = n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        vp.pb({a, b});
    }
    sort(all(vp));
    ll mx = 0;
    n = n1;
    for (i = 0; i < n; i++)
    {
        if (vp[i].S < mx)
            mx = vp[i].F;
        else
            mx = vp[i].S;
    }
    cout << mx << "\n";
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
