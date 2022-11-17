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
ll cnt(ll a)
{
    ll c = 0;
    while (a % 2 == 0 && a > 0)
    {
        a /= 2;
        c += 1;
    }
    return c;
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v;
    vector<ll> p;
    ll al = 0;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
        al += cnt(d);
        p.pb(cnt((i + 1)));
    }
    if (al >= n)
    {
        cout << 0 << "\n";
        return;
    }
    sort(all(p));
    reverse(all(p));
    ll res = 0, l = 0;
    ll nee = (n - al);
    while (nee > 0 && l < p.size())
    {
        nee -= p[l];
        res++;
        l++;
    }
    if (nee > 0)
    {
        cout << -1 << "\n";
        return;
    }
    cout << res << "\n";

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
