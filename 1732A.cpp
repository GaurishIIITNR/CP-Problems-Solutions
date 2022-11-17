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

ll f(vector<ll> &v, ll gcd, ll n, ll in)
{
    // Base
    if (gcd == 1)
        return 0;
    if (in == n)
    {
        if (gcd == 1)
            return 0;
        return n;
    }
    if (in > n)
    {
        return n;
    }
    // Recursive
    ll mx = n;
    for (ll i = in; i < n; i++)
    {
        mx = min(mx, n - i + f(v, __gcd(gcd, v[i]), n, i + 1));
    }
    return mx;
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v(n, 0), p;
    vin(v, n);
    ll gcd = v[0];
    for (auto x : v)
    {
        gcd = __gcd(x, gcd);
    }
    if (gcd == 1)
    {
        cout << 0 << "\n";
        return;
    }
    for (i = 0; i < n; i++)
    {
        p.pb(__gcd(v[i], i + 1));
    }
    // cout<<"4"<<"\n";
    cout << f(p, gcd, n,0) << "\n";

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
