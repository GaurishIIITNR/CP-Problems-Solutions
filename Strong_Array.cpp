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
    cin >> n >> k;
    vector<ll> v;
    // ll s=0;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
    }
    while (k--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        if (a == 1)
            v[b - 1] = c;
        else
        {
            ll sm = 0, mx = 0, mn = INT_MAX;
            for (i = b - 1; i < c; i++)
            {
                sm += v[i];
                mx = max(mx, v[i]);
                mn = min(mn, v[i]);
            }
            cout << ((c - b + 1) * (mx - mn) + sm) << "\n";
        }
    }

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
