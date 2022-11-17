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
ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
    }
    vector<ll> v1;
    v1.pb(v[0]);
    for (i = 1; i < n; i++)
    {
        v1.pb(lcm(v[i], v[i - 1]));
    }
    v1.pb(v[v.size() - 1]);
    // deb(v1.size());
    // vout(v1);
    for (i = 1; i < n + 1; i++)
    {
        if (__gcd(v1[i], v1[i - 1]) != v[i - 1])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
